#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	printf("%d\n", ft_strncmp("Why", "ello", 2));
	printf("%d\n", ft_strncmp("Why", "Sello", 2));
	printf("%d\n", ft_strncmp("Why", "Bello", 3));
	printf("%d\n", ft_strncmp("Why", "Whya",3));
	printf("%d\n", ft_strncmp("Why", "Why",3));
	printf("****************\n");
	printf("%d\n", strncmp("Why", "ello", 2));
	printf("%d\n", strncmp("Why", "Sello", 2));
	printf("%d\n", strncmp("Why", "Bello",3));
	printf("%d\n", strncmp("Why", "Whya", 3));
	printf("%d\n", strncmp("Why", "Why", 3));
	printf("****************\n");
	printf("%d\n", ft_strncmp("foo\x90", "foo\x90", sizeof("foo\x90")));
	printf("%d\n", ft_strncmp("foo\x30\x01", "foo\x30\02", sizeof("foo\x30\x01")));
	printf("%d\n", ft_strncmp("foo\x96", "foo\x95", sizeof("foo\x90")));
	printf("****************\n");
	printf("%d\n", strncmp("foo\x90", "foo\x90", sizeof("foo\x90")));
	printf("%d\n", strncmp("foo\x30\x01", "foo\x30\02", sizeof("foo\x30\x01")));
	printf("%d\n", strncmp("foo\x96", "foo\x95", sizeof("foo\x90")));
	return (0);
}