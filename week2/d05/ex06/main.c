#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	printf("%d\n", ft_strcmp("Why", "ello"));
	printf("%d\n", ft_strcmp("Why", "Sello"));
	printf("%d\n", ft_strcmp("Why", "Bello"));
	printf("%d\n", ft_strcmp("Why", "Whya"));
	printf("%d\n", ft_strcmp("Why", "Why"));
	printf("****************\n");
	printf("%d\n", strcmp("Why", "ello"));
	printf("%d\n", strcmp("Why", "Sello"));
	printf("%d\n", strcmp("Why", "Bello"));
	printf("%d\n", strcmp("Why", "Whya"));
	printf("%d\n", strcmp("Why", "Why"));
	return (0);
}