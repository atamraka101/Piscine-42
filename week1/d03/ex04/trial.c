#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *a / *b;
	*b = hold % *b;
}

int	main(void)
{
	int v;
	int w;

	v = 10;
	w = 6;
	ft_ultimate_div_mod(&v, &w);
	printf("v = %d , w = %d", v, w);
	return (0);
}
