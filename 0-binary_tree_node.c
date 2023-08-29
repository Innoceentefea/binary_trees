#include "binary_trees.h"

/**
 * binary_tree_node - creat node
 * @parent: Pointer to the parent
 * @value: the value of node
 *
 * Return: binary tree pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode || !value)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
