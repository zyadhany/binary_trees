#include "binary_trees.h"

/**
 * array_to_bst - delette binary tree node.
 * @array: parent node.
 * @size: val
 *
 * Return: NULL at error or a pointer to the new node.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *node;

	if (array == NULL)
		return (NULL);

	node = NULL;

	for (i = 0; i < size; i++)
		if (bst_insert(&node, array[i]) == NULL)
			return (NULL);

	return (node);
}
