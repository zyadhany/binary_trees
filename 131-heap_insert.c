#include "binary_trees.h"

/**
 * heap_insert - delette binary tree node.
 * @root: parent node.
 * @value: val
 *
 * Return: NULL at error or a pointer to the new node.
 */
heap_t *heap_insert(heap_t **root, int value)
{
	avl_t *at, *tmp;

	if (!root)
		return (NULL);

	at = *root;

	if (at == NULL)
	{
		tmp = binary_tree_node(NULL, value);
		if (tmp == NULL)
			return (NULL);
		return (*root = tmp);
	}

	if (at->n < value)
	{
		if (at->right)
			return (heap_insert(&at->right, value));

		tmp = binary_tree_node(at, value);
		if (tmp == NULL)
			return (NULL);
		return (at->right = tmp);
	}


	if (at->n > value)
	{
		if (at->left)
			return (heap_insert(&at->left, value));

		tmp = binary_tree_node(at, value);
		if (tmp == NULL)
			return (NULL);
		return (at->left = tmp);
	}

	return (NULL);
}
