#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int counter;
	int factorial;
	
	counter = nb;
	factorial = 1;
	while (counter != 0)
	{
		factorial = factorial * counter;
		counter--;
	}
	printf ("%d", factorial);
	return (factorial);
}

int main(void)
{
	ft_iterative_factorial(5);
	return (0);
}
