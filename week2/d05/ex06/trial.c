#include <stdio.h>
#include <string.h>

/*int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] == s2[i])
	{
		((s1[i] = '\0') && (s2[i] = '\0'))

	}
	else
	{
		return (0);
	}
}*/
/*int	length(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len++;
	}
	return (len);
}*/


int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((s1[i] < s2[i]) && (s1[i + 1] != '\0') || (s2[i] != '\0'))
		{
			return (-1);
		}
		else if ((s1[i] > s2[i]) && (s2[i + 1] != '\0'))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (-1);
}

int main(void)
{
	printf("%d", ft_strcmp("Why", "ello"));
	printf("%d", ft_strcmp("Why", "Sello"));
	printf("%d", ft_strcmp("Why", "Bello"));
	printf("%d\n", ft_strcmp("Why", "Why"));
	printf("%d", strcmp("Why", "ello"));
	printf("%d", strcmp("Why", "Sello"));
	printf("%d", strcmp("Why", "Bello"));
	printf("%d", strcmp("Why", "Whya"));
	return (0);
}