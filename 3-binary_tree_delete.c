#include "binary_trees.h"

/**
 * binary_tree_delete - function to delete
 * @tree: the parent node
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
