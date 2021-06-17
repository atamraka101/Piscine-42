/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkinnune <jkinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 08:19:21 by jkinnune          #+#    #+#             */
/*   Updated: 2021/05/30 15:57:42 by jkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_top_line(int x)
{
	ft_putchar('o');
	while (x - 2 >= 0)
	{
		if (x == 2)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		x--;
	}
}

void	rush_body_lines(int x, int y)
{
	int temp;

	while (y - 3 >= 0)
	{
		temp = x;
		ft_putchar('\n');
		ft_putchar('|');
		while (temp - 2 >= 0)
		{
			if (temp == 2)
			{
				ft_putchar('|');
				break ;
			}
			ft_putchar(' ');
			temp--;
		}
		y--;
	}
}

void	rush_bottom_lines(int x, int y)
{
	if (y > 1)
	{
		ft_putchar('\n');
		ft_putchar('o');
		while (x - 2 >= 0)
		{
			if (x == 2)
			{
				ft_putchar('o');
			}
			else
			{
				ft_putchar('-');
			}
			x--;
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	rush_top_line(x);
	rush_body_lines(x, y);
	rush_bottom_lines(x, y);
}
