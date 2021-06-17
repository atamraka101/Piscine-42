#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data);
void ft_list_clear(t_list **begin_list);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

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
	t_list *hold = NULL;
	char c1[] = "Hello";
	char c2[] = "World";
	char c3[] = "Welcome";
	char c4[] = "Last";
	char c5[] = "Target";

	list = (t_list**)malloc(sizeof(t_list*));
	if(list == NULL)
		return (-1);
	ft_list_push_front(list, c1);
	ft_list_push_front(list, c2);
	ft_list_push_front(list, c5);
	ft_list_push_front(list, c3);
	ft_list_push_front(list, c1);
	ft_list_push_front(list, c3);
	ft_list_push_front(list, c4);

	if(list != NULL)
	{
		printf("**list elements: \n");
		print_list_data(list);

		
		hold = ft_list_at(*list, 5);
		if (hold)
			printf("Element at 5: %s\n", hold->data);
		else
			printf("Element no 5 not found\n");

		ft_list_clear(list);
	}
	free(list);
	
}