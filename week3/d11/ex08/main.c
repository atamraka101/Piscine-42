#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data);
void ft_list_clear(t_list **begin_list);
void	ft_list_reverse(t_list **begin_list);

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
	char c1[] = "Fifth";
	char c2[] = "Fourth";
	char c3[] = "Third";
	char c4[] = "Second";
	char c5[] = "First";

	list = (t_list**)malloc(sizeof(t_list*));
	if(list == NULL)
		return (-1);
	ft_list_push_front(list, c1);
	ft_list_push_front(list, c2);
	ft_list_push_front(list, c3);
	ft_list_push_front(list, c4);
	ft_list_push_front(list, c5);

	if(list != NULL)
	{
		printf("**list elements: \n");
		print_list_data(list);

		
		printf("**list in reverse: \n");
		ft_list_reverse(list);
		print_list_data(list);

		ft_list_clear(list);
	}
	free(list);
	
}