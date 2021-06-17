/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:42:12 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/09 13:02:53 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	t_list	*hold;
	int		i;

	i = 0;
	begin = NULL;
	hold = NULL;
	if (ac <= 0 || av == NULL || *av == 0)
		return (NULL);
	while (i < ac)
	{
		hold = ft_create_elem(av[i]);
		hold->next = begin;
		begin = hold;
		i++;
	}
	return (begin);
}
