/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:18:56 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/30 12:56:29 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_row(int x)
{
	int x_counter;

	x_counter = 1;
	while (x_counter <= x)
	{
		if (x_counter == 1)
		{
			ft_putchar('/');
		}
		else if (x_counter == x)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		x_counter++;
	}
	ft_putchar('\n');
}

void	middle_row(int x, int y)
{
	int x_counter;
	int y_counter;

	x_counter = 1;
	y_counter = 1;
	while (y_counter <= y)
	{
		ft_putchar('*');
		while (x_counter <= x)
		{
			if (x_counter == x)
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
			x_counter++;
		}
		ft_putchar('\n');
		y_counter++;
		x_counter = 1;
	}
}

void	last_row(int x)
{
	int x_counter;

	x_counter = 1;
	while (x_counter <= x)
	{
		if (x_counter == 1)
		{
			ft_putchar('\\');
		}
		else if (x_counter == x)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		x_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((y != 0) && (x != 0))
	{
		first_row(x);
		if (y != 1)
		{
			middle_row(x - 1, y - 2);
			last_row(x);
		}
	}
}
