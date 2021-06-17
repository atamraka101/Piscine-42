#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list 		*ft_list_push_params(int ac, char **av);


void free_t_list(t_list **list)
{
	t_list *hold, *hold2;
	if (list != NULL && *list != NULL)
	{
		hold = *list;
		while (hold->next != NULL)
		{
			hold2 = hold;
			hold = hold->next;
			printf("Freeing List: %s\n", hold2->data);
			free (hold2);
		}
		printf("Freeing List: %s\n", hold->data);
		free(hold);
	}
	if (list != NULL)
		free (list);
	hold = NULL;
	hold2 = NULL;
}

void print_list_data(t_list **list)
{
	t_list *hold;
	
	hold = *list;
	while (hold->next != NULL)
	{
		printf("List: %s\n", hold->data);
		hold = hold->next;
	}
	printf("List: %s\n", hold->data);
}

int main(int argc, char **argv)
{
	t_list **list = NULL;
	int i;

	i = 0;
	list = (t_list**)malloc(sizeof(t_list*));
	if (list == NULL)
		return (-1);
	
	*list = ft_list_push_params(argc, argv);
	if (list != NULL)
	{
		print_list_data(list);
		free_t_list(list);
	}
	return 0;
}