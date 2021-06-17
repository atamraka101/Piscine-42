#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[15] = "Apple";
	char src[15] = "Destination";
	ft_strcpy(dest, src);
	printf("source: %s, destination: %s\n", src, dest);
	return (0);
}