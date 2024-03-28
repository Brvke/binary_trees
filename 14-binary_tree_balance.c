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

	if (tree->left || tree->right)
	{
		height_conut_left = tree_height(tree->left) + 1;
		height_conut_right = tree_height(tree->right) + 1;
	}

	if (height_conut_left > height_conut_right)
		return (height_conut_left);
	else
		return (height_conut_right);
}
/**
 * binary_tree_balance - checks how balanced a node on a binary tree is
 * @tree: node to be checked for balance
 * Return: difference in height between left and right or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_node_count, right_node_count, balance_factor;

	left_node_count = right_node_count = balance_factor = 0;
	if (!tree)
		return (0);

	if (tree->left)
		left_node_count = tree_height(tree->left) + 1;
	if (tree->right)
		right_node_count = tree_height(tree->right) + 1;

	balance_factor = left_node_count - right_node_count;

	return (balance_factor);
}
