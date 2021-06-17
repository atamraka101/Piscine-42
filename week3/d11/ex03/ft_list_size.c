/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:46:59 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/09 12:06:51 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*temp;

	count = 0;
	if (!begin_list)
		return (0);
	temp = begin_list;
	while (temp->next)
	{
		count++;
		temp = temp->next;
	}
	count++;
	return (count);
}
