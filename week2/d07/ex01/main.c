#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *range;
	int *nxt;
	int i;
	
	i = 0;
	range = ft_range(2147483647, -4117);
	printf(" Min = 10, Max = 20\n");
	while (i < 10)
	{
		printf("%d \t", range[i]);
		i++;
	}
	printf("\n");
	free(range);

	nxt = ft_range(20, 10);
	printf(" Min = 20, Max = 10\n");
	if(nxt == NULL)
		printf("NULL returned\n");
	while ((i < 10) && (nxt))
	{
		printf("%d \t", nxt[i]);
		i++;
	}
	printf("\n");
	free(nxt);

	nxt = ft_range(10, 10);
	printf(" Min = 10, Max = 10\n");
	if(nxt == NULL)
		printf("NULL returned\n");
	while ((i < 0) && (nxt))
	{
		printf("%d \t", nxt[i]);
		i++;
	}
	free(nxt);
	return (0);
}
