#include "binary_trees.h"

/**
 * binary_tree_leaves - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	size += binary_tree_leaves(tree->left);
	size += binary_tree_leaves(tree->right);

	return (size);
}
