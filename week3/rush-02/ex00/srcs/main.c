/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:25:44 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 18:21:28 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"
#include "ft_line_extractor.h"
#include "ft_pattern_utils.h"
#include "ft_pattern_validator.h"
#include "ft_process_pattern.h"
#include "ft_display_result.h"
#include "ft_io_utils.h"

#define MAX_SIZE 1024*1024

int				main(int argc, char **argv)
{
	int			r;
	t_list		**begin_lines;
	t_pattern	pattern;
	char		buf[MAX_SIZE];

	r = std_read(buf, MAX_SIZE);
	if (r <= 0)
	{
		pattern.type = UNKNOWN_PATTERN;
		display_result(pattern);
		return (0);
	}
	begin_lines = ft_extract_lines(buf, r);
	if (!begin_lines)
	{
		pattern.type = UNKNOWN_PATTERN;
		display_result(pattern);
		return (0);
	}
	pattern = ft_process_pattern(begin_lines);
	display_result(pattern);
	ft_deallocate_list(begin_lines);
	free(begin_lines);
	return (0);
}
