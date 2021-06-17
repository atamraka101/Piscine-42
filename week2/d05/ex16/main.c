#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[100] = "Apple";
	char src[15] = "Destination";

	char src1[15] = "\0bc";
	char dest1[100] = "Des\0ecs";
	ft_strcat(dest, src);
	printf("source: %s, destination: %s\n", src, dest);
	ft_strcat(dest1, src1);
	printf("source: %s, destination: %s\n", src1, dest1);
	return (0);
}