#include <stdio.h>
#include <string.h>

int	ft_str_is_printable
(char *str);

int	main(void)
{
	char test1[] = "ABCDEFG";
	char test2[] = "HFKJSDHFKJDSHF101";
	char test3[] = "FOU DFH";
	char test4[] = "-66990FHIUFFG";
	char test5[] = "-232334";
	char test6[] = "2346864336";
	char test7[] = "zdhjfudfhiufdbgff";

	printf("ABCDEFG = %d\n", ft_str_is_printable
	(test1));
	printf("HFKJSDHFKJDSHF101 = %d\n", ft_str_is_printable
	(test2));
	printf("FOU DFH = %d\n", ft_str_is_printable
	(test3));
	printf("-66990FHIUFFG= %d\n", ft_str_is_printable
	(test4));
	printf("-232334 = %d\n", ft_str_is_printable
	(test5));
	printf("2346864336 = %d\n", ft_str_is_printable
	(test6));
	printf("zdhjfudfhiufdbgff = %d\n", ft_str_is_printable
	(test7));
	return (0);
}