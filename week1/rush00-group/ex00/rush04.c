/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniemine <jniemine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:15:49 by jniemine          #+#    #+#             */
/*   Updated: 2021/05/30 19:05:46 by jniemine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int j;
	int i;

	j = 0;
	i = 0;
	while (++j <= y)
	{
		while (++i != x + 1)
		{
			if ((j == 1 || j == y) && (i == 1 || i == x))
			{
				if (j == 1)
					i == 1 ? ft_putchar('A') : ft_putchar('C');
				if (j == y && y > 1)
					i == 1 ? ft_putchar('C') : ft_putchar('A');
			}
			else if ((i == 1 || i == x) || (j == 1 || j == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i = 0;
	}
}
