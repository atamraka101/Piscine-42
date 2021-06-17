#include <stdio.h>

int	ft_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_any(char **tab, int(*f)(char*));

int	main(void)
{
	char *tab1[] = {"3.6.84..", "abcdefg", ".ab....32", 0};
	char *tab2[] = {"3.64.84..", "..3.1..8.", ".ab....32", 0};
	
	int result = ft_any(tab1, &ft_alpha);
	printf("Result 1: %d\n", result);
	result = ft_any(tab2, &ft_alpha);
	printf("Result 2: %d\n", result);
	return (0);
}
