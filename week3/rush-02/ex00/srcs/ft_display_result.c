/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_result.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:41:50 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 17:16:03 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_result.h"
#include "ft_io_utils.h"

void	print_output(t_pattern pattern)
{
	ft_putstr("[colle-0");
	ft_putnbr(pattern.type);
	ft_putstr("] [");
	ft_putnbr(pattern.cols);
	ft_putstr("] [");
	ft_putnbr(pattern.rows);
	ft_putstr("]");
}

void	print_output_0234(t_pattern pattern)
{
	pattern.type = 2;
	print_output(pattern);
	ft_putstr(" || ");
	pattern.type = 3;
	print_output(pattern);
	ft_putstr(" || ");
	pattern.type = 4;
	print_output(pattern);
}

void	print_output_034(t_pattern pattern)
{
	pattern.type = 3;
	print_output(pattern);
	ft_putstr(" || ");
	pattern.type = 4;
	print_output(pattern);
}

void	print_output_024(t_pattern pattern)
{
	pattern.type = 2;
	print_output(pattern);
	ft_putstr(" || ");
	pattern.type = 4;
	print_output(pattern);
}

void	display_result(t_pattern pattern)
{
	if (pattern.type == UNKNOWN_PATTERN)
		ft_putstr("aucune");
	else if (pattern.type <= 4)
	{
		print_output(pattern);
	}
	else if (pattern.type == RUSH_0234)
		print_output_0234(pattern);
	else if (pattern.type == RUSH_034)
		print_output_034(pattern);
	else if (pattern.type == RUSH_024)
		print_output_024(pattern);
	else
		ft_putstr("aucune");
	write(1, "\n", 1);
}
