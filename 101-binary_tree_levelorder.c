#include "binary_trees.h"

/**
 * binary_tree_levelorder - delette binary tree node.
 * @tree: parent node.
 * @func: function to applay
 *
 * Return: NULL at error or a pointer to the new node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t  *Q, *at, *tmp, *node;

	if (!tree || !func)
		return;

	Q = binary_tree_node(NULL, 0);
	node = Q;

	if (!Q)
		return;

	Q->left = (binary_tree_t *)tree;

	while (Q)
	{
		at = Q->left;

		func(at->n);

		if (at->left)
		{
			node->right = binary_tree_node(NULL, 0);
			if (!node->right)
				return;
			node->right->left = at->left;
		}

		if (at->right)
		{
			node->right = binary_tree_node(NULL, 0);
			if (!node->right)
				return;
			node->right->left = at->right;
		}

		tmp = Q;
		Q = Q->right;
		free(tmp);
	}
}
