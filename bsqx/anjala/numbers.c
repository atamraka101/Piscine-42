/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:23:17 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/16 14:37:19 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_map.h"
#include "debug.h"

int		ft_atoi(char *str)
{
	int index;
	int result;
	int sign;

	index = skip_whitespace(str);
	result = 0;
	sign = 1;
	if (str[index] == '+')
		index++;
	else if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			break ;
		result = result * 10 + str[index] - '0';
		index++;
	}
	if (result > 0 && sign < 0 && result != -2147483648)
		result *= sign;
	return (result);
}

int		skip_whitespace(char *str)
{
	int index;

	index = 0;
	while (str[index] == ' ' || str[index] == '\f' || str[index] == '\n'
	|| str[index] == '\r' || str[index] == '\t' || str[index] == '\v')
		index++;
	return (index);
}

int		check_score(int i, int j, int val, int **cache)
{
	int score;

	score = val + min_three(cache[i - 1][j - 1], cache[i - 1][j],
	cache[i][j - 1]);
	return (score);
}

int		min_three(int nb1, int nb2, int nb3)
{
	if (nb1 <= nb2 && nb1 <= nb3)
	{
		return (nb1);
	}
	if (nb2 <= nb1 && nb2 <= nb3)
	{
		return (nb2);
	}
	return (nb3);
}
