#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

void btree_apply_infix(t_btree *root, void(*applyf)(void *))
;

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!root || !item)
		return ;
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	else if (cmpf(item, (*root)->item) < 0)
	{
		btree_insert_data(&((*root)->left), item, cmpf);
	}
	else
	{
		btree_insert_data(&((*root)->right), item, cmpf);
	}
}

int compare(void *a, void *b)
{
	int x = *(int*)a;
	int y = *(int*)b;

	if (x < y)
		return (-1);
	if (x == y)
		return (0);
	else
		return (1);
}

void display_tree(t_btree *node)
{
	if (!node)
		return;
	printf("%d:\n", *((int*)(node->item)));
	if (node->left)
	{
		printf("node (%d)->left: ", *((int*)(node->item)));
		display_tree(node->left);
	}
	if (node->right)
	{
		printf("node (%d)->right: ", *((int*)(node->item)));
		display_tree(node->right);
	}
}

void display_item(void *item)
{
	printf("[%d]\n", *(int*)item);
}
void deallocate_nodes(t_btree *node)
{
	if (node == NULL)
		return;
	deallocate_nodes(node->left);
	deallocate_nodes(node->right);
	free(node);
}

int main(void)
{
	int		input[10] = {15, 20, 3, 64, 98, 4, 6, 5, 74, 12};
	int		i;
	t_btree	**my_tree;

	if (!(my_tree = (t_btree**)malloc(sizeof(t_btree*))))
		return (0);
	*my_tree = NULL;
	i = 0;
	while (i < 10)
	{
		btree_insert_data(my_tree, &input[i], &compare);
		i++;
	}

	display_tree(*my_tree);
	printf("Infix display\n");
	btree_apply_infix(*my_tree, &display_item);
	deallocate_nodes(*my_tree);
	free(my_tree);

}