#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char test1[] = "abcde fg123";
	char test2[] = "101hfk j,sdh  fkjd shf";
	char test3[] = "jdfj9 ,  09dfou-09 dfho90";
	char test4[] = "-6699. 0fhiu ffg;";
	char test5[] = "-2323 34 a";
	char test6[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("abcde fg123 = %s\n", ft_strcapitalize(test1));
	printf("101hfk j,sdh  fkjd shf = %s\n", ft_strcapitalize(test2));
	printf("jdfj9 , 09dfou-09 dfho90 = %s\n", ft_strcapitalize(test3));
	printf("-6699. 0fhiu ffg;= %s\n", ft_strcapitalize(test4));
	printf("-2323 34 a = %s\n", ft_strcapitalize(test5));
	printf("%s\n", ft_strcapitalize(test6));
	return (0);
}