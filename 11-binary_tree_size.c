#include "binary_trees.h"
/**
 *  binary_tree_size -  function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_left, size_right;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left) + 1;
	size_right = binary_tree_size(tree->right);
	return (size_left + size_right);
}
