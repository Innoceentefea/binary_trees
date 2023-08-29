#include "binary_trees.h"

/**
 * binary_tree_delete - function to delete
 * @parent: the parent node
 * @value: the number of the new node
 *
 * Return: A pointer to the delete node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_t *tmp1, *tmp = tree;

	while (tree)
	{
		while (tmp->left)
		{
			tmp = tmp->left;
		}
		tmp1 = tmp;
		if (tmp1->parent)
			tmp = tmp1->parent;
		free(tmp1);
		if (tmp->right)
			tmp = tmp->right;
	}
 }
