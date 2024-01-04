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

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	return (l - r);
}
