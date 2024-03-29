#include "binary_trees.h"

/**
 * binary_tree_is_leaf - delette binary tree node.
 * @node: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left || node->right)
		return (0);

	return (1);
}
