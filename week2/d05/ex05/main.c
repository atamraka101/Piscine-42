#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char st[20] = "Where are you?";
	
	printf("Condition: 0 = %s\n", ft_strstr(st, "\0"));
	printf("Condition:  yo = %s\n", ft_strstr(st, " yo"));
	printf("Condition: e = %s\n", ft_strstr(st, "e"));
	printf("Condition: asd3 = %s\n", ft_strstr(st, "asd3"));
	printf("************\n");
	printf("Condition: 0 = %s\n", strstr(st, "\0"));
	printf("Condition:  yo = %s\n", strstr(st, " yo"));
	printf("Condition: e = %s\n", strstr(st, "e"));
	printf("Condition: asd3 = %s\n", strstr(st, "asd3"));
	return(0);
}