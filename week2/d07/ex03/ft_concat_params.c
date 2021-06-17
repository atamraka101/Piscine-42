/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:18:33 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/04 06:36:30 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_arg_len(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		pos;
	char	*result;
	int		arg_len;

	arg_len = ft_get_arg_len(argc, argv);
	if (!(result = (char*)malloc(sizeof(char) * arg_len)))
		return (NULL);
	i = 1;
	pos = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			result[pos++] = argv[i][j];
			j++;
		}
		result[pos++] = '\n';
		i++;
	}
	result[pos - 1] = '\0';
	return (result);
}
