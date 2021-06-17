#include <stdio.h>
int ft_strlen(char *str);

int main(void)
{
	char string[] = "abcdefg1";
	int len;

	len = ft_strlen(string);
	printf("Len: %d\n", len);
	return 0;
}