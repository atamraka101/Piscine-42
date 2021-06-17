/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trial.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:35:01 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/27 12:51:08 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char dig_0;
	char dig_1; 
	char dig_2;

	dig_0 = '0';
	while (dig_0 <= '9')
	{
		dig_1 = dig_0 + 1;
		while (dig_1 <= '9')
		{
			dig_2 = dig_1 + 1;
			while (dig_2 <= '9')
			{
				ft_putchar(dig_0);
				ft_putchar(dig_1);
				ft_putchar(dig_2);
				if (dig_0 != '7' || dig_1 != '8' || dig_2 != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				dig_2++;
			}
			dig_1++;
		}
		dig_0++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
