#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: pointer to the node to insert the right-child in.
 * @value: the value to store in the new node.
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right)
	{
		temp = parent->right;
		parent->right = newnode;
		temp->parent = newnode;
		parent->right->right = temp;
	}
	else
	{
		parent->right = newnode;
	}
	return (newnode);
}
