#include "binary_trees.h"

/**
 * binary_tree_preorder - delette binary tree node.
 * @tree: parent node.
 * @func: function to applay
 *
 * Return: NULL at error or a pointer to the new node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
