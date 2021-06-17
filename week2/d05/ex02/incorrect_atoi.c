/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:29:35 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/02 13:42:08 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int value;
	int sign;

	i = 0;
	sign = 1;
	value = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\r') ||
	(str[i] == '\n') || (str[i] == '\f') || (str[i] == '\v') || (str[i] == '+'))
	{
		i++;
	}
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[0] == '+')
	{
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		value *= 10;
		value += str[i] - '0';
		i++;
	}
	value = value * sign;
	return (value);
}
