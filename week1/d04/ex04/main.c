#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
	int index;
	int value;
	index = -1;

	while (index != 10)
	{
		value = ft_fibonacci(index);
		printf("value of %d th index is : %d\n", index, value);
		index++;
	}
	return (0);
}
