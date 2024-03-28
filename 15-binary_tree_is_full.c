#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root Node of binary tree
 * Return: 1 if binary tree is full or 0 tree is not full or NULL
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_check = 1, right_check = 1;
	if (!tree)
		return (0);

	if (tree->left)
		left_check = binary_tree_is_full(tree->left);
	if (tree->right)
		right_check = binary_tree_is_full(tree->right);
	if (left_check == 0 || right_check == 0)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (0);
}
