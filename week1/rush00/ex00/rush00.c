/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:18:56 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/30 11:54:26 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(int c);

int	first_n_last_row(int x)
{
	int x_counter;
	
	x_counter = 1;
	while ( x_counter <= x)
	{
		if ((x_counter == x) || (x_counter == 1))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		x_counter++;
	}
	ft_putchar('\n');
	return (0);
}

int middle_row(int x, int y)
{
	int x_counter;
	int y_counter;

	x_counter = 1;
	y_counter = 1;
	while (y_counter <= y)
	{
		ft_putchar('|');
		while ( x_counter <= x)
		{
			if (x_counter == x)
			{
				ft_putchar('|');
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
	return (0);	
}
int rush(int x, int y) //x -width , y- length
{
	first_n_last_row(x);
	middle_row(x-1, y-2);
	first_n_last_row(x);
	return (0);
}

int main(void)
{
	rush(5, 10);
	return (0);
}