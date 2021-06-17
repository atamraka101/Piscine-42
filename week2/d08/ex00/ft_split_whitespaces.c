/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:30:49 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/04 20:43:36 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	ft_get_word_info(char *str, int *pos, int *len)
{
	int i;
	int index;

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (((str[i] == ' ') || (str[i] == '\t') ||
					(str[i] == '\n')) && ((str[i + 1] != ' ') &&
			(str[i + 1] != '\t') && (str[i + 1] != '\n')))
		{
			pos[index] = i + 1;
		}
		else if (((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\n')) &&
				((str[i + 1] == ' ') ||
				 	(str[i + 1] == '\t') || (str[i + 1] == '\n')))
		{
			len[index] = (i + 1) - pos[index];
			index++;
		}
		i++;
	}
	len[index] = i - pos[index];
}

int		ft_count_words(char *str)
{
	int i;
	int wc;
	int is_word;

	i = 0;
	wc = 0;
	is_word = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
		{
			is_word = 0;
		}
		else
		{
			if (!is_word)
			{
				wc++;
				is_word = 1;
			}
		}
		i++;
	}
	return (wc);
}

char	**ft_split_whitespaces(char *str)
{
	int		wc;
	int		i;
	int		*pos;
	int		*len;
	char	**words;

	i = 0;
	wc = ft_count_words(str);
	words = (char **)malloc((wc + 1) * sizeof(char));
	pos = (int *)malloc((wc + 1) * sizeof(int));
	len = (int *)malloc((wc + 1) * sizeof(int));
	ft_get_word_info(str, pos, len);
	while (i < wc)
	{
		words[i] = (char *)malloc(sizeof(char) * (len[i] + 1));
		ft_strncpy(words[i], &str[pos[i]], len[i]);
		i++;
	}
	words[i] = 0;
	free(pos);
	free(len);
	return (words);
}
