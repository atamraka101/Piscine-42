#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int a;

	a = ft_atoi("-+42");
	printf("-+ ==> %d\n", a);
	a = ft_atoi("  12345");
	printf("12345 ==> %d\n", a);
	a = ft_atoi("AAA123");
	printf("AAA123 ==> %d\n", a);
	a = ft_atoi("0");
	printf("0 ==> %d\n", a);
	a = ft_atoi("-173");
	printf("-173 ==> %d\n", a);
	return (0);
}
