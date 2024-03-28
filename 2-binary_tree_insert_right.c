#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserte a new_node to the right
 * @parent: an root for the new_node
 * @value: int value to be stored on right node of @parent node
 * Return: pointer to new_node or NULL in case of Failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->right != NULL)
	{
		temp = parent->right;
		new_node->right = temp;
		temp->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
