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
	binary_tree_t  *Q;

	if (!tree || !func)
		return;

	Q = binary_tree_node(NULL, 0);
	free(Q);
	if (!Q)
		return;

}
