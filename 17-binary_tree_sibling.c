#include "binary_trees.h"
/**
 * binary_tree_sibling - prints the sibling node of a binary tree node
 * @node: node on a binary tree
 * Return: pointer to sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (node->parent->left != node)
	{
		if (node->parent->left)
			return (node->parent->left);
	}
	else
	{
		if (node->parent->right)
			return (node->parent->right);
	}

	return (NULL);
}
