#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures
 * the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree
 * to measure the balance factor.
 * Return: If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (-1);

	h_left = binary_tree_balance(tree->left) + 1;
	h_right = binary_tree_balance(tree->right) + 1;

	return (h_left - h_right);
}
