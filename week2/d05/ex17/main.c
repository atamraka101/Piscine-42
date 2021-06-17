#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int	main(void)
{
	char dest[100] = "Apple";
	char src[15] = "Destination";

	char src1[15] = "\0bc";
	char dest1[100] = "Des\0ecs";
	ft_strncat(dest, src, 4);
	printf("source: %s, destination: %s\n", src, dest);
	ft_strncat(dest1, src1, 3);
	printf("source: %s, destination: %s\n", src1, dest1);
	return (0);
}