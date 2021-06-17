/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pattern_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 09:12:30 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 17:23:46 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pattern_utils.h"
#include "ft_pattern.h"

int	check_mid_chars(char *data, int len, char p)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (p != data[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_top_line_ends(char *line, int len, int type)
{
	if ((type == RUSH_00) && ((line[len - 1] != 'o') || (line[0] != 'o')))
		return (UNKNOWN_PATTERN);
	if (type == RUSH_01)
	{
		if (line[0] != '/')
			return (UNKNOWN_PATTERN);
		if ((len > 1) && (line[len - 1] != '\\'))
			return (UNKNOWN_PATTERN);
	}
	if (type == RUSH_0234)
	{
		if (line[0] != 'A')
			return (UNKNOWN_PATTERN);
		if (len > 1)
		{
			if (line[len - 1] == 'A')
				return (RUSH_02);
			else if (line[len - 1] == 'C')
				return (RUSH_034);
			else
				return (UNKNOWN_PATTERN);
		}
	}
	return (type);
}

int	check_mid_line_ends(char *line, int len, int type)
{
	if (type == RUSH_00)
	{
		if ((line[0] != '|') || (line[len - 1] != '|'))
			return (UNKNOWN_PATTERN);
	}
	if ((type == RUSH_01) && ((line[len - 1] != '*') || (line[0] != '*')))
		return (UNKNOWN_PATTERN);
	if ((type == RUSH_02 || type == RUSH_034 || type == RUSH_0234) &&
		(line[0] != 'B') && (line[len - 1] != 'B'))
		return (UNKNOWN_PATTERN);
	return (type);
}

int	check_bottom_line_ends_for_0234(char *line, int len, int type)
{
	if (type == RUSH_0234)
	{
		if (len > 1)
		{
			if (line[0] == 'C' && line[len - 1] == 'C')
				return (RUSH_02);
			if (line[0] == 'C' && line[len - 1] == 'A')
				return (RUSH_04);
		}
		if (len == 1 && line[0] == 'C')
			return (RUSH_024);
		if (len == 1 && line[0] == 'A')
			return (RUSH_03);
	}
	return (UNKNOWN_PATTERN);
}

int	check_bottom_line_ends(char *line, int len, int type)
{
	if ((type == RUSH_00) && ((line[len - 1] != 'o') || (line[0] != 'o')))
		return (UNKNOWN_PATTERN);
	if ((type == RUSH_01) && ((line[len - 1] != '/') || (line[0] != '\\')))
		return (UNKNOWN_PATTERN);
	if (type == RUSH_0234)
		return (check_bottom_line_ends_for_0234(line, len, type));
	if ((type == RUSH_02) && (line[0] != 'C' || line[len - 1] != 'C'))
		return (UNKNOWN_PATTERN);
	if (type == RUSH_034)
	{
		if (line[0] == 'A' && line[len - 1] == 'C')
			return (RUSH_03);
		if (line[0] == 'C' && line[len - 1] == 'A')
			return (RUSH_04);
		else
			return (UNKNOWN_PATTERN);
	}
	return (type);
}
