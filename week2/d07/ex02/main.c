#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *ptr1;
	int **ptr2;

	int i;
	int len;

	ptr2 = &ptr1;

	len = ft_ultimate_range(ptr2, 33, 37);
	i = 0;

	printf("Len: %d\n", len);
	while (i < len)
	{
		printf("%d --> %d\n", i, *(*ptr2 + i));
		i++;
	}
	
	free(ptr1);

	return (0);
}
