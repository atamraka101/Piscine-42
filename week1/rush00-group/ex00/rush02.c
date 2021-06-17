/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseitama <oseitama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 08:39:47 by oseitama          #+#    #+#             */
/*   Updated: 2021/05/30 09:06:18 by oseitama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_middle_rows(int x, int width)
{
	if (width == 0 || width == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_print_length(int x, int width, int y, int length)
{
	if (length == 0 || length == y - 1)
	{
		if (width == 0 || width == x - 1)
		{
			if (length == 0)
			{
				ft_putchar('A');
			}
			else
			{
				ft_putchar('C');
			}
		}
		else
		{
			ft_putchar('B');
		}
	}
	else
	{
		ft_print_middle_rows(x, width);
	}
}

void	rush(int x, int y)
{
	int width;
	int length;

	length = 0;
	if ((x > 0) && (y > 0))
	{
		while (length < y)
		{
			width = 0;
			while (width < x)
			{
				ft_print_length(x, width, y, length);
				width++;
			}
			ft_putchar('\n');
			length++;
		}
	}
}
