#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char test1[] = "ABCDEFG";
	char test2[] = "HFKJSDHFKJDSHF101";
	char test3[] = "FOU DFH";
	char test4[] = "-66990FHIUFFG";
	char test5[] = "-232334";

	printf("ABCDEFG = %d\n", ft_str_is_alpha(test1));
	printf("HFKJSDHFKJDSHF101 = %d\n", ft_str_is_alpha(test2));
	printf("FOU DFH = %d\n", ft_str_is_alpha(test3));
	printf("-66990FHIUFFG= %d\n", ft_str_is_alpha(test4));
	printf("-232334 = %d\n", ft_str_is_alpha(test5));
	return (0);
}