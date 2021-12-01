#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	/** crear nuevo nodo */
	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->left)
	{
		temp = parent->left;
		parent->left = newnode;
		temp->parent = newnode;
		parent->left->left = temp;
	}
	else
	{
		parent->left = newnode;
	}
	return (newnode);
}
