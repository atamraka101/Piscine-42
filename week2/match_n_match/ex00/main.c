#include <stdio.h>

int	match(char *s1, char *s2);

int	main(void)
{
	char s1[] = "a*******";
	char s2[] = "******a**";
	if (match(s1, s2))
	{
		printf("%s and %s matches\n", s1, s2);
	}
	else
	{
		printf("%s and %s does not matches\n", s1, s2);
	}
	return (0);
}
