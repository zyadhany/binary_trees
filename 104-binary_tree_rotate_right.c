#include "binary_trees.h"

/**
 * binary_tree_rotate_right - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	if (!tree || !tree->left)
		return (NULL);

	tmp = tree->left;

	tmp->parent = tree->parent;
	tree->left = tmp->right;
	tmp->right = tree;
	tree->parent = tmp;

	if (tree->left)
		tree->left->parent = tree;

	if (tmp->parent)
	{
		if (tmp->parent->right == tree)
			tmp->parent->right = tmp;
		else
			tmp->parent->left = tmp;
	}

	return (tmp);
}

