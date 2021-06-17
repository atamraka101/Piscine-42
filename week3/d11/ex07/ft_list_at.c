/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:24:40 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/09 17:49:49 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*hold;

	if (!begin_list)
		return (NULL);
	i = 1;
	hold = begin_list;
	while ((i < nbr) && (hold))
	{
		hold = hold->next;
		i++;
	}
	if (i == nbr)
	{
		return (hold);
	}
	return (NULL);
}
