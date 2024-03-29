#include "binary_trees.h"

/**
 * binary_tree_node - creat binary tree node.
 * @parent: parent node.
 * @value: value of node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;

	bt = malloc(sizeof(binary_tree_t));
	if (bt == NULL)
		return (NULL);

	bt->n = value;
	bt->parent = parent;
	bt->left = NULL;
	bt->right = NULL;

	return (bt);
}
