#include "binary_trees.h"


/**
 * binary_tree_is_perfect - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int deap = 0;
	binary_tree_t *at = tree;

	if (!tree)
		return (0);

	while (at->left)
	{
		at = at->left;
		deap++;
	}

	return (binary_full_recursive(tree) &&
			binary_perfet_recursive(tree, deap, 1));
}

/**
 * binary_perfet_recursive - delette binary tree node.
 * @tree: parent node.
 * @deap: tree deapth
 * @at: current deapth
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_perfet_recursive(const binary_tree_t *tree, int deap, int at)
{
	int l, r;

	if (!tree->left && !tree->right)
		return (at == deap);
	l = binary_perfet_recursive(tree->left, deap, at + 1);
	r = binary_perfet_recursive(tree->right, deap, at + 1);

	return (l & r);
}


/**
 * binary_full_recursive - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
int binary_full_recursive(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	l = binary_full_recursive(tree->left);
	r = binary_full_recursive(tree->right);

	return (l * r);
}
