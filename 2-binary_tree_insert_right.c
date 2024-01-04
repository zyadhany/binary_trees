#include "binary_trees.h"

/**
 * binary_tree_insert_right - creat binary tree node.
 * @parent: parent node.
 * @value: value of node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;

	if (parent == NULL)
		return (NULL);

	bt = binary_tree_node(parent, value);

	if (bt == NULL)
		return (NULL);

	if (parent->right)
	{
		bt->right = parent->right;
		parent->right->parent = bt;
	}

	parent->right = bt;
	return (bt);
}
