#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char dest[15] = "zestinatione";
	char src[15] = "app\0le";

	ft_strncpy(dest, src, 5);
	printf("source: %s, destination: %s\n", src, dest);
	ft_strncpy(dest, src, 10);
	printf("source: %s, destination: %s\n", src, dest);
	printf("Dest[9] %c\n", dest[9]);
	return (0);
}