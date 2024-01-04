#include "binary_trees.h"

/**
 * binary_trees_ancestor - delette binary tree node.
 * @first: first parent node.
 * @second: second node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
						const binary_tree_t *second)
{
	binary_tree_t *a, *b;

	if (!first || !second)
		return (NULL);

	a = (binary_tree_t *)first;

	while (a)
	{
		b = (binary_tree_t *)second;

		while (b)
		{
			if (a == b)
				return (a);
			b = b->parent;
		}

		a = a->parent;
	}

	return (NULL);
}
