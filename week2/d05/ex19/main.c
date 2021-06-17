#include <stdio.h>
#include <string.h>

unsigned	int	ft_strlpy(char *dest, char *src, int size);

int	main(void)
{
	char dest[100] = "Apple";
	char src[15] = "Destination";
	//printf("%u", ft_strlcat(dest, src, 4));
	
	char src1[15] = "\0bc";
	char dest1[100] = "Des\0ecs";
	unsigned int a;
	unsigned int b;

	a = ft_strlcpy(dest, src, 4);
	b = ft_strlcpy(dest1, src1, 3);
	printf("%i", a);
	printf("%i", b);
	printf("***********************\n");
	//a = strlcat(dest, src, 4);
	//b = strlcat(dest1, src1, 3);
	//printf("%i", strlcat(dest, src, 4));
	//printf("%i", strlcat(dest1, src1, 3));

	return (0);
}