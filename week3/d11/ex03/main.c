#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);
int	ft_list_size(t_list *begin_list);

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

int main(void)
{
	t_list **list = NULL;
	char c1[] = "Hello";
	char c2[] = "World";
	char c3[] = "Welcome";

	list = (t_list**)malloc(sizeof(t_list*));
	if(list == NULL)
		return (-1);
	ft_list_push_back(list, c1);
	ft_list_push_back(list, c2);
	ft_list_push_back(list, c3);
	ft_list_push_back(list, c3);
	ft_list_push_back(list, c3);
	ft_list_push_back(list, c3);

	printf("List size: %d\n", ft_list_size(*list));

	if(list != NULL)
	{
		print_list_data(list);
		free_t_list(list);
	}
	
}