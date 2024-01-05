#include "binary_trees.h"

/**
 * bst_search - delette binary tree node.
 * @tree: parent node.
 * @value: val
 *
 * Return: NULL at error or a pointer to the new node.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (tree->n < value)
		return (bst_search(tree->right, value));
	if (tree->n > value)
		return (bst_search(tree->left, value));
	return (tree);
}
