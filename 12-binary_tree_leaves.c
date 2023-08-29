#include "binary_trees.h"


/**
 * binary_tree_leaves - Count the number of leaves in a binary tree.
 *
 * @tree: Pointer to root node of tree to count number of leaves.
 * Return: 0 if tree is NULL else number of leaves in tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	size_t count_left_leaves = binary_tree_leaves(tree->left);
	size_t count_right_leaves = binary_tree_leaves(tree->right);

	return (count_left_leaves + count_right_leaves);
}
