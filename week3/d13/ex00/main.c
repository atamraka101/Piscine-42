#include <stdlib.h>
#include <stdio.h>
#include "ft_btree.h"

int main(void)
{
	int a = 5;

	t_btree *tree;
	tree = btree_create_node(&a);
	printf("tree->item: %d\n", *(int*)tree->item);
	free(tree);
}