#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char abc[20] = "What is your name?";
	char *output;

	output = ft_strdup(abc);
	printf("Output: %s\n", output);
	free(output);
	return (0);
}
