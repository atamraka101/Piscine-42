/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_pattern.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:50:08 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 17:28:55 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_process_pattern.h"

int				check_rush_type(t_list *begin_line)
{
	int			rows;
	int			type;
	t_list		*hold;

	hold = begin_line;
	type = tentitive_rush_type(hold->data[0]);
	rows = ft_count_list(begin_line);
	if (rows >= 1)
	{
		type = check_top_line(hold->data, hold->len, type);
		hold = hold->next;
	}
	if (rows > 2)
	{
		while (hold->next)
		{
			if ((type = check_mid_line(hold->data, hold->len, type))
					== UNKNOWN_PATTERN)
				return (UNKNOWN_PATTERN);
			hold = hold->next;
		}
	}
	if (rows > 1)
		type = check_bottom_line(hold->data, hold->len, type);
	return (type);
}

int				ft_verify_columns(t_list *begin_list)
{
	int			col;
	t_list		*hold;

	hold = begin_list;
	col = hold->len;
	while (hold)
	{
		if (col != hold->len)
			return (0);
		hold = hold->next;
	}
	return (col);
}

t_pattern		ft_process_pattern(t_list **begin_list)
{
	t_pattern	pattern;

	if (begin_list == NULL)
	{
		pattern.type = UNKNOWN_PATTERN;
		return (pattern);
	}
	pattern.rows = ft_count_list(*begin_list);
	pattern.cols = ft_verify_columns(*begin_list);
	pattern.type = check_rush_type(*begin_list);
	if (pattern.cols == 0)
	{
		pattern.type = UNKNOWN_PATTERN;
		return (pattern);
	}
	return (pattern);
}
