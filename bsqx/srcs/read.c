/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 07:22:18 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/16 14:46:16 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "read_map.h"
#include "debug.h"

int		read_key(int fd, t_mapkey *key)
{
	char		c;
	int			i;
	char		buf[17];

	i = 0;
	c = ft_getchar(fd);
	key->line_count = 0;
	while (c != '\n')
	{
		if (c == '\0')
			return (-1);
		*(buf + i) = c;
		i++;
		c = ft_getchar(fd);
	}
	key->empty = buf[i - 3];
	key->obstacle = buf[i - 2];
	key->fill = buf[i - 1];
	buf[i - 3] = '\0';
	key->line_count = ft_atoi(buf);
	return (key->line_count);
}

int		read_first_line(int fd, char **map, t_mapkey *key)
{
	char		c;
	int			i;
	char		buf[512];
	char		*line;

	i = 0;
	c = ft_getchar(fd);
	key->line_length = 0;
	while (c != '\n')
	{
		if (c == '\0')
			return (-1);
		*(buf + i) = c;
		i++;
		c = ft_getchar(fd);
	}
	*(buf + i) = '\n';
	*(buf + i + 1) = '\0';
	line = (char*)malloc(sizeof(char) * (i + 2));
	ft_strcpy(line, buf);
	*map = line;
	key->line_length = i;
	return (i);
}

char	*read_map_line(int fd, int line_length)
{
	char *buf;

	buf = (char*)malloc(sizeof(char) * (line_length + 1));
	if (ft_getbuf(fd, buf, line_length + 1) < (line_length + 1))
		return (NULL);
	if (*(buf + line_length) != '\n')
		return (NULL);
	return (buf);
}
