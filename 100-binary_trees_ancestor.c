#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest
 * common ancestor of two nodes.
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t temp1, temp2;

	if (!first || !second)
		return (NULL);

	temp1 = binary_tree_depth(first);
	temp2 = binary_tree_depth(second);
	while (temp1 > temp2)
	{
	first = first->parent;
	temp1--;
	}
	while (temp2 > temp1)
	{
	second = second->parent;
	temp2--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 *  binary_tree_depth - function that measures the
 *  depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth.
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
	{
		return (0);
	}
	else
		return (binary_tree_depth(tree->parent) + 1);
}
