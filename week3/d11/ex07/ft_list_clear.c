/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:12:54 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/09 17:14:03 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *hold;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	while (*begin_list)
	{
		hold = *begin_list;
		*begin_list = (*begin_list)->next;
		free(hold);
	}
	*begin_list = NULL;
}
