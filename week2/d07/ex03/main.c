#include <stdio.h>
#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);
int ft_get_arg_len(int argc, char **argv);

int		main(int argc, char **argv)
{
	char *abc;
	//int i;

	//int len;

	//len = ft_get_arg_len(argc, argv);
	//printf("Len: %d\n", len);
	abc = ft_concat_params(argc, argv);
	printf("Result: \n%s", abc);
	/*i = 0;
	abc = ft_concat_params(argc, argv);
	while (i < argc - 1)
	{
		printf("%s", a[i]);
	}*/
	free(abc);
	return (0);
}
argv[0][0]= .
argv[1][0]= j
argv[1][1] = d
