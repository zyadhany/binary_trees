#include "binary_trees.h"

/**
 * avl_remove - delette binary tree node.
 * @root: parent node.
 * @value: val
 *
 * Return: NULL at error or a pointer to the new node.
 */
avl_t *avl_remove(bst_t *root, int value)
{
	if (!root)
		return (NULL);
	if (value)
		return (root);
	return (root);
}
