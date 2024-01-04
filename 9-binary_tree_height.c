#include "binary_trees.h"

/**
 * binary_tree_height - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	return (1 + (l > r) ? l : r);
}
