#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserte a new_node to the left
 * @parent: an root for the new_node
 * @value: int value to be stored on left node of @parent node
 * Return: pointer to new_node or NULL in case of Failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->left != NULL)
	{
		temp = parent->left;
		new_node->left = temp;
		temp->parent = new_node;
	}

	parent->left = new_node;
	return (new_node);
}
