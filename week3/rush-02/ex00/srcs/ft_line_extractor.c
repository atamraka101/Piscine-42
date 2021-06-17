/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_extractor.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:17:21 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 17:19:53 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_line_extractor.h"

int			ft_count_lines(char *buf, int buf_len)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < buf_len)
	{
		if (buf[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

void		ft_get_line_info(char *buf, int buf_len, int *pos, int *len)
{
	int		i;
	int		index;
	int		line_started;

	i = 0;
	index = 0;
	line_started = 0;
	while (i < buf_len)
	{
		if (!line_started)
		{
			pos[index] = i;
			line_started = 1;
		}
		else if (buf[i] == '\n')
		{
			line_started = 0;
			len[index] = (i) - pos[index];
			index++;
		}
		i++;
	}
}

t_list		**ft_extract_lines(char *buf, int buf_len)
{
	int		line_nos;
	int		*pos;
	int		*len;
	int		i;
	t_list	**begin_list;

	line_nos = ft_count_lines(buf, buf_len);
	begin_list = (t_list**)malloc(sizeof(t_list*));
	pos = (int*)malloc(sizeof(int) * line_nos);
	len = (int*)malloc(sizeof(int) * line_nos);
	if (pos && len && begin_list)
	{
		ft_get_line_info(buf, buf_len, pos, len);
		i = 0;
		*begin_list = NULL;
		while (i < line_nos)
		{
			ft_add_list(begin_list, &buf[pos[i]], len[i]);
			i++;
		}
	}
	free(pos);
	free(len);
	return (begin_list);
}
