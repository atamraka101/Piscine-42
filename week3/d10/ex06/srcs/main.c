/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:51:33 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/08 18:22:03 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ios.h"
#include "ft_operations.h"

int		read_operator(char *operator)
{
	if (operator[1] != '\0')
		return (5);
	if (operator[0] == '+')
		return (0);
	if (operator[0] == '-')
		return (1);
	if (operator[0] == '*')
		return (2);
	if (operator[0] == '/')
		return (3);
	if (operator[0] == '%')
		return (4);
	return (5);
}

void	ft_undefined(int a, int b)
{
	(void)(a);
	(void)(b);
	ft_putstr("0\n");
}

void	calculate(int a, int b, int op)
{
	void	(*operators[6])(int, int);

	operators[0] = &ft_add;
	operators[1] = &ft_sub;
	operators[2] = &ft_mul;
	operators[3] = &ft_div;
	operators[4] = &ft_mod;
	operators[5] = &ft_undefined;
	(*operators[op])(a, b);
}

int		main(int argc, char *argv[])
{
	int a;
	int b;
	int op;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op = read_operator(argv[2]);
	calculate(a, b, op);
	return (0);
}
