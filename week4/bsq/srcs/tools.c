/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:53:57 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/16 17:27:40 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_map.h"
#include "debug.h"
#include <unistd.h>
#include <stdlib.h>

char	ft_getchar(int fd)
{
	char	c;

	if (read(fd, &c, 1) == 0)
		return ('\0');
	return (c);
}

int		ft_getbuf(int fd, char *buf, int buf_size)
{
	return (read(fd, buf, buf_size));
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

void	free_str_arr(char **str_arr)
{
	int		i;

	i = 0;
	while (str_arr[i] != NULL)
	{
		free(str_arr[i]);
		i++;
	}
	free(str_arr);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
