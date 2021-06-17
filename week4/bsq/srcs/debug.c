/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:46:59 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/16 19:32:54 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_map.h"
#include "debug.h"
#include <stdlib.h>
#define DEBUG 0

void	debug_print_key(t_mapkey *key)
{
	if (DEBUG)
	{
		ft_putstr(1, "map had ");
		ft_putnbr(1, key->line_count);
		ft_putstr(1, " lines, key is ");
		ft_putchar(1, key->empty);
		ft_putchar(1, key->obstacle);
		ft_putchar(1, key->fill);
		ft_putchar(1, '\n');
	}
}

void	debug_print_map(char **map)
{
	int i;

	i = 0;
	if (DEBUG)
	{
		while (map[i] != NULL)
			ft_putstr(1, *(map + i++));
	}
}

void	debug_putstr(char *str)
{
	if (DEBUG)
		ft_putstr(2, str);
}

void	debug_putnbr(int nbr)
{
	if (DEBUG)
		ft_putnbr(2, nbr);
}
