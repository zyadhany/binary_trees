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
			node = node->right;
			node->left = at->left;
		}
		if (at->right)
		{
			node->right = binary_tree_node(NULL, 0);
			if (!node->right)
				return;
			node = node->right;
			node->left = at->right;
		}

		tmp = Q;
		Q = Q->right;
		free(tmp);
	}
}

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
