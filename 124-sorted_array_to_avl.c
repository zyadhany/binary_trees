#include "binary_trees.h"

/**
 * sorted_array_to_avl - delette binary tree node.
 * @array: parent node.
 * @size: val
 *
 * Return: NULL at error or a pointer to the new node.
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	size_t i, j, re;
	avl_t *node;

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
			return (NULL);
	}

	return (node);
}
