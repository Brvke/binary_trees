#include "binary_trees.h"
/**
 * tree_sibling - prints the sibling node of a binary tree node
 * @node: node on a binary tree
 * Return: pointer to sibling node
*/
binary_tree_t *tree_sibling(binary_tree_t *node)
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

/**
 * binary_tree_uncle - finds the uncle of @node if it exists
 * @node: node to search uncle for
 * Return: return pointer to unlce node or NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	return (tree_sibling(node->parent));
}
