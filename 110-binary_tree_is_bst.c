#include "binary_trees.h"

/**
 * is_bst - delette binary tree node.
 * @tree: parent node.
 * @l: a
 * @r: a
 * Return: NULL at error or a pointer to the new node.
 */
int is_bst(const binary_tree_t *tree, int l, int r)
{
	if (!tree)
		return (1);
	if (tree->n <= l || tree->n >= r)
		return (0);
	return (is_bst(tree->left, l, tree->n) && is_bst(tree->right, tree->n, r));
}


/**
 * binary_tree_is_bst - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
