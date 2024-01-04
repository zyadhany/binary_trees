#include "binary_trees.h"

/**
 * binary_tree_sibling - delette binary tree node.
 * @node: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
binary_tree_t *binary_tree_sibling(const binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
