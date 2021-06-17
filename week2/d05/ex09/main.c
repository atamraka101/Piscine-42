#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char test1[] = "ABCDEFG123";
	char test2[] = "101HFKJSDH  FKJDSHF";
	char test3[] = "JDFJ909DFOU09DFHO90";
	char test4[] = "-66990FHIUFFG";
	char test5[] = "-232334";

	printf("ABCDEFG123 = %s\n", ft_strlowcase(test1));
	printf("101HFKJSDH  FKJDSHF = %s\n", ft_strlowcase(test2));
	printf("JDFJ909DFOU09DFHO90 = %s\n", ft_strlowcase(test3));
	printf("-66990FHIUFFG= %s\n", ft_strlowcase(test4));
	printf("-232334 = %s\n", ft_strlowcase(test5));
	return (0);
}