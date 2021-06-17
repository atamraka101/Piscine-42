#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main(void)
{
	int a;

	a = ft_iterative_power(2, 8);
	printf ("Number 2, Power 8=  %d\n", a);
	a = ft_iterative_power(3, 0);
	printf ("Number 3, Power 0= %d\n", a);
	a = ft_iterative_power(8, -8);
	printf ("Number 8, Power -8= %d\n", a);
	return (0);
}
