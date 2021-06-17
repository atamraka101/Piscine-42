#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void 		ft_list_push_back(t_list **begin_list, void *data);
t_list		*ft_list_last(t_list *begin_list);

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
			//printf("Freeing List: %s\n", hold2->data);
			free (hold2);
		}
		//printf("Freeing List: %s\n", hold->data);
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

int main(void)
{
	t_list **list = NULL;
	t_list *last = NULL;
	char c1[] = "Hello";
	char c2[] = "World";
	char c3[] = "Welcome";
	char c4[] = "Last";

	list = (t_list**)malloc(sizeof(t_list*));
	if(list == NULL)
		return (-1);
	ft_list_push_back(list, c1);
	ft_list_push_back(list, c2);
	ft_list_push_back(list, c3);
	ft_list_push_back(list, c3);
	ft_list_push_back(list, c3);
	ft_list_push_back(list, c4);

	
	if(list != NULL)
	{
		print_list_data(list);
	}

	last = ft_list_last(*list);
	printf("last->data: %s\n", last->data);
	last = NULL;

	if(list != NULL)
	{
		free_t_list(list);
	}
	
}