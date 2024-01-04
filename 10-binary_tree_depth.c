#include "binary_trees.h"

/**
 * binary_tree_postorder - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = binary_tree_depth(tree->left);
	r = binary_tree_depth(tree->right);

	return (1 + (l > r) ? l : r);
}
