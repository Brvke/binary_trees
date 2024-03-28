#include "binary_trees.h"
/**
 * binary_tree_nodes - prints the number of nodes
 * @tree: node of tree to start counting from
 * Return: returns the number of nodes or 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 1;

	if (!tree)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left)
			node_count += binary_tree_nodes(tree->left);
		if (tree->right)
			node_count += binary_tree_nodes(tree->right);
	}
	else
		return (0);

	return (node_count);
}
