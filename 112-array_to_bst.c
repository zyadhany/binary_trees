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
	size_t i, j, re;
	bst_t *node;

	if (array == NULL)
		return (NULL);

	node = NULL;

	for (i = 0; i < size; i++)
	{
		re = 1;
		for (j = 0; j < i; j++)
			if (array[j] == array[i])
				re = 0;
		if (re)
			if (bst_insert(&node, array[i]) == NULL)
				return (NULL);
	}

	return (node);
}
