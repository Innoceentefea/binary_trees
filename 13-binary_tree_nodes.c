#include "binary_trees.h"


/**
 * binary_tree_nodes - Count the number of nodes
 * in a binary tree with at least 1 child.
 *
 * @tree: Pointer to root node of tree to count number of nodes.
 * Return: 0 if tree is NULL else number of nodes in tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree))
}
