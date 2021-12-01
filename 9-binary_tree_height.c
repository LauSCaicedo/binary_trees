#include "binary_trees.h"
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