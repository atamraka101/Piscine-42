#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main(void)
{
	int a;

	a = ft_recursive_power(2, 8);
	printf ("Number 2, Power 8=  %d\n", a);
	a = ft_recursive_power(8, 0);
	printf ("Number 8, Power 0= %d\n", a);
	a = ft_recursive_power(8, -2);
	printf ("Number 8, Power-2= %d\n", a);
	return (0);
}