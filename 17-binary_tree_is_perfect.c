#include "binary_trees.h"
/**
 * tree_height - a function that can return height of a tree
 * @tree: node to calculates height from
 * Return: height of tree starting from @tree to the furthest leaf
*/
int tree_height(const binary_tree_t *tree);
int tree_height(const binary_tree_t *tree)
{
	int height_conut_left = 0;
	int height_conut_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_conut_left = tree_height(tree->left) + 1;
	if (tree->right)
		height_conut_right = tree_height(tree->right) + 1;

	if (height_conut_left > height_conut_right)
		return (height_conut_left);
	else
		return (height_conut_right);
}
/**
 * tree_is_full - checks if a binary tree is full
 * @tree: root Node of binary tree
 * Return: 1 if binary tree is full or 0 tree is not full or NULL
*/
int tree_is_full(const binary_tree_t *tree);
int tree_is_full(const binary_tree_t *tree)
{
	int left_check = 1, right_check = 1;
	if (!tree)
		return (0);

	if (tree->left)
		left_check = tree_is_full(tree->left);
	if (tree->right)
		right_check = tree_is_full(tree->right);

	if (left_check == 0 || right_check == 0)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (0);
}
/**
 * binary_tree_is_perfect - checks if abinary tree has a 0 balance factor
 * @tree: root node of binary tree
 * Return: return 1 if tree is perfect else return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_node_count, right_node_count, balance_factor;

	left_node_count = right_node_count = balance_factor = 0;
	if (!tree)
		return (0);

	if (tree_is_full(tree) != 1)
		return (0);

	if (tree->left)
		left_node_count = tree_height(tree->left) + 1;
	if (tree->right)
		right_node_count = tree_height(tree->right) + 1;

	balance_factor = left_node_count - right_node_count;

	if (balance_factor == 0)
		return (1);
	return (0);
}
