#include "binary_trees.h"

/**
 * binary_tree_rotate_left - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	if (!tree || !tree->right)
		return (NULL);

	tmp = tree->right;

	tmp->parent = tree->parent;
	tree->right = tmp->left;
	tmp->left = tree;
	tree->parent = tmp;

	if (tree->right)
		tree->right->parent = tree;

	if (tmp->parent)
	{
		if (tmp->parent->left == tree)
			tmp->parent->left = tmp;
		else
			tmp->parent->right = tmp;
	}

	return (tmp);
}
