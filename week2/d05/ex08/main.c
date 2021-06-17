#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char test1[] = "abcdefg123";
	char test2[] = "101hfkjsdh  fkjdshf";
	char test3[] = "jdfj909dfou09dfho90";
	char test4[] = "-66990fhiuffg";
	char test5[] = "-232334";

	printf("abcdefg123 = %s\n", ft_strupcase(test1));
	printf("101hfkjsdh  fkjdshf = %s\n", ft_strupcase(test2));
	printf("jdfj909dfou09dfho90 = %s\n", ft_strupcase(test3));
	printf("-66990fhiuffg= %s\n", ft_strupcase(test4));
	printf("-232334 = %s\n", ft_strupcase(test5));
	return (0);
}