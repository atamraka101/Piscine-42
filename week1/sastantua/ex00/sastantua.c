/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:20:27 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/30 20:34:37 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar('/');
		}
		else if (i == width - 1)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void	sastantua(int size)
{
	int block;
	int block_height;
	int row_count;
	int width;

	block = 1;
	block_height = 3;
	width = 3;
	while (block <= size)
	{
		row_count = 1;
		while (row_count <= block_height)
		{
			ft_printline(width);
			width = width + 2;
			row_count++;
		}
		width = width + 4;
		block_height++;
		block++;
	}
}
