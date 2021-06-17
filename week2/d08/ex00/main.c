#include <stdio.h>
#include <stdlib.h>

int ft_count_words(char *str);

char **ft_split_whitespaces(char *str);

int main(void)
{
	char src[] = " I am a super women \ndefinately not just a\nprogrammer";
	char **results;
	int i;

	int x;
	x = ft_count_words(src);
	printf("No of words: %d\n", x);
	results = ft_split_whitespaces(src);
	if(results == NULL)
	{
		return (0);
	}

	i = 0;
	while (results[i] != 0)
	{
		printf("Result[%d]: %s\n", i, results[i]);
		free(results[i]);
		i++;
	}
	free(results[i]); // freeing last one
	if(results != NULL)
	{
		free (results);
	}
	printf("Input: %s\n", src);
	return (0);
}
