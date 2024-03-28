#include "binary_trees.h"
/**
 * binary_tree_node - creates a new node 
 * @parent: the parent node of the new node NULL if new node is root
 * @value: int value to be stored at the node
 * Return: returns pointer to a new node or NULL if it fails
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
