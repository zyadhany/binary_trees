#include "binary_trees.h"

/**
 * binary_tree_is_complete - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int deap = 0, end = 1;

	binary_tree_t *at = (binary_tree_t *)tree;

	if (!tree)
		return (0);

	while (at->left)
	{
		if (at->left)
			at = at->left;
		else
			at = at->right;
		deap++;
	}

	return (binary_complete_recursive(tree, deap, 0, &end));
}

/**
 * binary_complete_recursive - delette binary tree node.
 * @tree: parent node.
 * @deap: tree deapth
 * @at: current deapth
 * @end: aa
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_complete_recursive(const binary_tree_t *tree,
				int deap, int at, int *end)
{
	int l, r;

	if (!tree)
	{
		*end = 0;
		return (at == deap);
	}

	if (at == deap)
	{
		if (tree->left || tree->right)
			return (0);
		return (*end);
	}


	l = binary_complete_recursive(tree->left, deap, at + 1, end);
	r = binary_complete_recursive(tree->right, deap, at + 1, end);

	return (l & r);
}
