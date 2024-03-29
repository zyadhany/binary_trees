#include "binary_trees.h"

/**
 * binary_tree_balance - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = bt_height(tree->left);
	r = bt_height(tree->right);

	return (l - r);
}

/**
 * bt_height - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
int bt_height(const binary_tree_t *tree)
{
	int l = 1, r = 1;

	if (!tree)
		return (0);

	l += bt_height(tree->left);
	r += bt_height(tree->right);

	return ((l > r) ? l : r);
}
