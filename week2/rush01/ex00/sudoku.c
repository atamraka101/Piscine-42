/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 21:42:17 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/06 07:00:46 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int	ft_strlen(char *str);

void ft_putline(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		ft_putchar(' ');
		i++;
	}
}

int	check_parameters(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}	
	i = 1;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) != 9)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			//if (((argv[i][j] >= '0') && (argv[i][j] <= '9')) || (argv[i][j] == '.'))
			if (((argv[i][j] < '0') || (argv[i][j] > '9')) && (argv[i][j] != '.'))
			{	
				ft_putstr("Error\n");
				return (0);
			}
			j++;
		}
		i++;

	}
	return (1);
}

void display_sudoku(char **grid)
{
	int i;

	i = 0;
	while (grid[i] != 0)//argv
	{
		ft_putline(grid[i]);
		ft_putchar('\n');
		i++;
	}
}

int is_entry_valid(char **grid, int row, int col, int n)
{
	int i;
	int j;
	int sub_row;
	int sub_col;
	
	i = 0;
	while (i < 9)
	{
		if ((grid[row][i] == ('0' + n)) || (grid[i][col] == ('0' + n)))
		{
			return (0);
		}
		i++;
	}
	i = 0;
    sub_row = row - (row % 3);
    sub_col = col - (col % 3);
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            if (grid[i + sub_row][j + sub_col] == '0' + n)
                return (0);
            j++;
        }
        i++;
    }
	return (1);
}
int resolve_sudoku(char **grid, int row, int col)
{
	int i;

	if (col == 9)
	{
		row++;
		col = 0;
	}
	if (grid[row] == 0)
		return (1);
	if (grid[row][col] != '.')
		return (resolve_sudoku(grid, row, col + 1));
	i = 1;
	while (i <= 9)
	{
		if (is_entry_valid(grid, row, col, i))
		{
			grid[row][col] = '0' + i;
			if (resolve_sudoku(grid, row, col + 1))
				return (1);
		}
		grid[row][col] = '.';
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	check_parameters(argc, argv);
	if (resolve_sudoku(&argv[1], 0, 0))
		display_sudoku(&argv[1]);
	return (0);
}