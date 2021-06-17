/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:03:36 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/27 13:14:43 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_print_digits(char dig0, char dig1, char dig2)
{
	ft_putchar(dig0);
	ft_putchar(dig1);
	ft_putchar(dig2);
	if (dig0 != '7' || dig1 != '8' || dig2 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char dig0;
	char dig1;
	char dig2;

	dig0 = '0';
	while (dig0 <= '9')
	{
		dig1 = dig0 + 1;
		while (dig1 <= '9')
		{
			dig2 = dig1 + 1;
			while (dig2 <= '9')
			{
				ft_print_digits(dig0, dig1, dig2);
				dig2++;
			}
			dig1++;
		}
		dig0++;
	}
}
