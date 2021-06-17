/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:34:29 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/02 18:19:42 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;
	int in;
	char hold[100];

	i = 1;
	j = 2;
	if (argc <= 0)
	{
		return (0);
	}
	while (i < argc)
	{
		if (argv[i] > argv[j])
		{
			in = 0;
			while (argv[i] != '\0')
			{
				hold[in] = argv[i];
				in++;
			}
			argv[i] = argv[j];
			argv[j] = hold[];
		}
		i++;
		j++;
	}
	return (0);
}
