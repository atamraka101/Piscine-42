/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:23:32 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 17:56:37 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io_utils.h"

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putstr(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char				*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void				ft_putnbr(int nb)
{
	unsigned int	x;
	char			op;

	x = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		x *= -1;
	}
	if (x >= 10)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
	{
		op = x + '0';
		write(1, &op, 1);
	}
}

int					std_read(char *buf, int len)
{
	int				i;
	char			c;

	i = 0;
	while (read(STDIN_FILENO, &c, 1) > 0)
	{
		buf[i] = c;
		if (i >= len)
			break ;
		i++;
	}
	buf[i] = '\0';
	return (i);
}
