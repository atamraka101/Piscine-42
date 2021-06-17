/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pattern_validator.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 09:01:17 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 17:25:46 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pattern_validator.h"
#include "ft_pattern_utils.h"
#include "ft_pattern.h"

int			tentitive_rush_type(char c)
{
	if (c == 'o')
		return (RUSH_00);
	if (c == '/')
		return (RUSH_01);
	if (c == 'A')
		return (RUSH_0234);
	return (UNKNOWN_PATTERN);
}

int			check_top_line(char *line, int len, int tent_type)
{
	int		type;
	char	mid;

	if (tent_type == RUSH_00)
		mid = '-';
	if (tent_type == RUSH_01)
		mid = '*';
	if (tent_type == RUSH_0234)
		mid = 'B';
	type = check_top_line_ends(line, len, tent_type);
	if (!check_mid_chars(&line[1], len - 2, mid))
	{
		return (UNKNOWN_PATTERN);
	}
	return (type);
}

int			check_mid_line(char *line, int len, int tent_type)
{
	int		type;
	char	mid;

	mid = ' ';
	type = check_mid_line_ends(line, len, tent_type);
	if (!check_mid_chars(&line[1], len - 2, mid))
		return (UNKNOWN_PATTERN);
	return (type);
}

int			check_bottom_line(char *line, int len, int tent_type)
{
	int		type;
	char	mid;

	if (tent_type == RUSH_00)
		mid = '-';
	if (tent_type == RUSH_01)
		mid = '*';
	if (tent_type == RUSH_0234 ||
		tent_type == RUSH_02 ||
		tent_type == RUSH_034 ||
		tent_type == RUSH_03 ||
		tent_type == RUSH_04 || tent_type == RUSH_024)
		mid = 'B';
	type = check_bottom_line_ends(line, len, tent_type);
	if (!check_mid_chars(&line[1], len - 2, mid))
		return (UNKNOWN_PATTERN);
	return (type);
}
