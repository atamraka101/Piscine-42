#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[ i + j] == to_find[j]) && (str[i + j] != '\0'))
		{
			j++;
			if(to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char st[20] = "Where are you?";
	//char print[20];
	//char stt[20];

	printf("%s\n", ft_strstr(st, " u?tz"));
	//strstr(st, "yo");
	//printf("%s\n", stt);
	return(0);
}