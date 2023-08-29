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
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
