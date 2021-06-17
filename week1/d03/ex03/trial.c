#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int main(void)
{
	int c;
	int d;
	int div;
	int mod;

	c = 10;
	d = 3;
	
	ft_div_mod(c, d, &div, &mod);
	printf("div: %d, mod: %d\n", div, mod);
}


