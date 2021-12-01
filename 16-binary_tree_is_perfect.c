#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int j, h_left, h_right;

	j = binary_tree_balance(tree);

	if (tree == NULL)
		return (0);

	if (j == 0)
	{
		h_left = binary_tree_is_perfect(tree->left);
		h_right = binary_tree_is_perfect(tree->right);
		if (h_left == h_right)
		{
			return (1);
		}
		return (0);
	}
	else
		return (0);
}

/**
 * binary_tree_balance - Function that measures
 * the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree
 * to measure the balance factor.
 * Return: If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right = 0;

	if (tree == NULL)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	return (h_left - h_right);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int h_left, h_right = 0;

	if (tree == NULL)
		return (-1);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}
