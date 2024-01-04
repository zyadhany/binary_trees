#include "binary_trees.h"

/**
 * binary_tree_insert_left - creat binary tree node to left child.
 * @parent: parent node.
 * @value: value of node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;

	if (parent == NULL)
		return (NULL);

	bt = binary_tree_node(parent, value);

	if (bt == NULL)
		return (NULL);

	if (parent->left)
	{
		bt->left = parent->left;
		parent->left->parent = bt;
	}

	parent->left = bt;
	return (bt);
}
