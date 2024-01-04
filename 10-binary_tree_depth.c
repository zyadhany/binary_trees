#include "binary_trees.h"

/**
 * binary_tree_depth - delette binary tree node.
 * @tree: parent node.
 *
 * Return: NULL at error or a pointer to the new node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
