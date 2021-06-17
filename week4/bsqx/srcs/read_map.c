/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:15:27 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/16 18:33:40 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "read_map.h"
#include "ft_maps.h"
#include "debug.h"

void	read_files(int count, char **files)
{
	int			i;
	int			fd;
	char		**map;
	t_mapkey	*key;

	i = 0;
	while (i < count)
	{
		fd = open(*(files + i), O_RDONLY);
		if (fd)
		{
			if (parse_map(fd, &map, &key) == 0)
			{
				if (solve_map(map, key) != 0)
					ft_putstr(2, "map error\n");
				free_str_arr(map);
				free(key);
			}
			else
				ft_putstr(2, "map error\n");
			close(fd);
		}
		else
			ft_putstr(2, "map error\n");
		i++;
	}
}

void	read_stdin(void)
{
	char		**map;
	t_mapkey	*key;
	int			misses;

	misses = 0;
	while (misses < 3)
	{
		if (parse_map(0, &map, &key) == 0)
		{
			if (misses > 0)
			{
				while (misses > 0)
				{
					ft_putstr(2, "map error\n");
					misses--;
				}
			}
			if (solve_map(map, key) != 0)
				ft_putstr(2, "map error\n");
			free_str_arr(map);
			free(key);
		}
		else
			misses++;
	}
}

int		parse_map(int fd, char ***map, t_mapkey **key)
{
	t_mapkey	*new_key;
	char		**new_map;

	new_key = (t_mapkey*)malloc(sizeof(t_mapkey));
	if (read_key(fd, new_key) < 1)
	{
		free(new_key);
		return (1);
	}
	new_map = (char**)malloc(sizeof(char*) * (new_key->line_count + 1));
	if (read_first_line(fd, new_map, new_key) < 0)
	{
		free(new_key);
		free(new_map);
		return (1);
	}
	if (parse_lines(fd, new_map, new_key) != 0 || (ft_getchar(fd) != '\0'))
	{
		free(new_key);
		free_str_arr(new_map);
		return (1);
	}
	*map = new_map;
	*key = new_key;
	return (0);
}

int		parse_lines(int fd, char **map, t_mapkey *key)
{
	int i;

	i = 1;
	while (i < key->line_count)
	{
		map[i] = read_map_line(fd, key->line_length);
		if (map[i] == NULL)
			return (-1);
		i++;
	}
	map[i] = NULL;
	return (0);
}
