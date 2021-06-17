#include <stdio.h>
#include <stdlib.h>
int	ft_sub_one(int a)
{
	return (a - 1);
}
int	 *ft_map(int *tab, int length, int (*f)(int));

int	main(void)
{
	int tab[5] = {10, -5, 3, -78, 92};
	int len = 5;
	int *result = ft_map(tab, len, &ft_sub_one);
	int i = 0;
	while (i < len)
	{
		printf("Input: %d, Output: %d\n", tab[i], result[i]);
		i++;
	}	
	free (result);
	return (0);
}
