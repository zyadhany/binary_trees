#include "binary_trees.h"

/**
 * bst_insert - delette binary tree node.
 * @tree: parent node.
 * @value: val
 *
 * Return: NULL at error or a pointer to the new node.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *at, *tmp;

	if (!tree)
		return (NULL);

	at = *tree;

	if (at == NULL)
	{
		tmp = binary_tree_node(NULL, value);
		if (tmp == NULL)
			return (NULL);
		return (*tree = tmp);
	}

	if (at->n < value)
	{
		if (at->right)
			return (bst_insert(&at->right, value));

		tmp = binary_tree_node(at, value);
		if (tmp == NULL)
			return (NULL);
		return (at->right = tmp);
	}


	if (at->n > value)
	{
		if (at->left)
			return (bst_insert(&at->left, value));

		tmp = binary_tree_node(at, value);
		if (tmp == NULL)
			return (NULL);
		return (at->left = tmp);
	}

	return (NULL);
}
