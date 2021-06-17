#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main(void)
{
	int x;
	x = ft_recursive_factorial(0);
	printf ("0! = %d\n",x);
	x = ft_recursive_factorial(-1);
	printf ("-1! = %d\n",x);
	x = ft_recursive_factorial(5);
	printf ("5! = %d\n",x);
	return (0);
}
