#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int c;
	int d;
	
	c = 10;
	d = 5;
	ft_ultimate_div_mod(&c, &d);
	printf("%d %d", c, d);
}
