/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:30:13 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 17:21:42 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_io_utils.h"

t_list		*ft_create_list(char *data, int len)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->data = (char*)malloc(sizeof(char) * len);
	ft_strncpy(list->data, data, len);
	list->len = len;
	list->next = NULL;
	return (list);
}

void		ft_add_list(t_list **begin_list, char *data, int len)
{
	t_list	*hold;

	if (begin_list == NULL)
		return ;
	if (*begin_list == NULL)
		*begin_list = ft_create_list(data, len);
	else
	{
		hold = *begin_list;
		while (hold->next != NULL)
		{
			hold = hold->next;
		}
		hold->next = ft_create_list(data, len);
	}
}

void		ft_deallocate_list(t_list **begin_list)
{
	t_list	*hold;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	while (*begin_list)
	{
		hold = *begin_list;
		*begin_list = (*begin_list)->next;
		free(hold->data);
		free(hold);
	}
	*begin_list = NULL;
}

int			ft_count_list(t_list *begin_list)
{
	int		result;
	t_list	*hold;

	result = 0;
	hold = begin_list;
	while (hold)
	{
		hold = hold->next;
		result++;
	}
	return (result);
}
