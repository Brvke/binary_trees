#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the node is a root node or not
 * @node: node to be checked
 * Return: 1 if node is a root node, otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
