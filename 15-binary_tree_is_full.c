#include "binary_trees.h"

/**
 * binary_tree_is_full - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_full_recursive(tree));
}

/**
 * binary_full_recursive - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_full_recursive(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	l = binary_full_recursive(tree->left);
	r = binary_full_recursive(tree->right);

	return (l * r);
}
