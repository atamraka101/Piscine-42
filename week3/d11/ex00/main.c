#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int main(void)
{
	t_list *e;
	char data[] = "Hello";
	e = ft_create_elem(data);
	if (e != NULL)
	{
		printf("Element->data: %s\n", e->data);
	}
	if (e)
		free(e);
}
