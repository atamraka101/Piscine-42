#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_is_a_larger(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int main(void)
{
	int input1[6] = {67, 97, 103, 116, 128, 298};
	int input2[6] = {128, 64, 7, 86, 32, 99};
	//int input3[6] = {-214688, -1, 73, 89, 1024, 2134850};
	int input4[2] = { -23325435, 12343};
	int input5[2] = {45465767, -346565};
	int i;

	i = 0;
	while(i < 6)
	{ 
		printf("%d\n", input1[i]);
		i++;
	}
	printf("Result 1: %d\n", ft_is_sort(input1, 6, &ft_is_a_larger));
	i = 0;
	while(i < 6)
	{ 
		printf("%d\n", input1[i]);
		i++;
	}
	printf("Result 2: %d\n", ft_is_sort(input2, 6, &ft_is_a_larger));
	i = 0;
	while(i < 2 )
	{
		printf("%d\n", input4[i]);
		i++;
	}
	printf("Result 4: %d\n", ft_is_sort(input4, 2, &ft_is_a_larger));
	i = 0;
	while(i < 2 )
	{
		printf("%d\n", input5[i]);
		i++;
	}
	printf("Result 5: %d\n", ft_is_sort(input5, 2, &ft_is_a_larger));

		return(0);
}