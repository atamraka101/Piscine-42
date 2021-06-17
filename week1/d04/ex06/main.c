#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	int a;

	a = ft_is_prime(29);
	printf("%d", a);
	a = ft_is_prime(9);
	printf("%d", a);
	a = ft_is_prime(11);
	printf("%d", a);
	return (0);
}