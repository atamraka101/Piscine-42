/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:53:34 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/09 18:16:27 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *reverse;
	t_list *hold;
	t_list *next;

	if (!(begin_list) || !(*begin_list))
		return ;
	reverse = NULL;
	hold = *begin_list;
	while (hold->next)
	{
		next = hold->next;
		hold->next = reverse;
		reverse = hold;
		hold = next;
	}
	hold->next = reverse;
	*begin_list = hold;
}
