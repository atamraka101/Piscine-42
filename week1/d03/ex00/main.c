#include<stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int *a;
	int b;

	a = &b;
	ft_ft(a);
	printf("%d", *a);
	return (0);
}

