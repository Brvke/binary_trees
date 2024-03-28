#include "binary_trees.h"
/**
 * binary_tree_delete - deletes all nodes of a binary tree
 * @tree: root node of binary tree to be cleand
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
