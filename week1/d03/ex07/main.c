#include <stdio.h>
char *ft_strrev(char *str);


int main(void)
{
	char string[] = "abcdefg10";
	printf("input: %s\n", string);
	ft_strrev(string);
	printf("output: %s\n", string);

	return (0);
}