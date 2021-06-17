#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int **ptr1;
	int *ptr2;
	int i;
	int len;

	ptr1 = &ptr2;
	len = ft_ultimate_range(ptr1, 33, 37);
	i = 0;
	while (i < len)
	{
		printf("%d --> %d\n", i, *ptr1[i]);
		i++;
	}
	


	return (0);
}
