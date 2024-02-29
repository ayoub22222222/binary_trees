#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that insert a new node to the right
 * @parent: pointer to the parent node
 * @value: intger value
 * Return: return the inserted node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
	return (NULL);

	if (parent->right != NULL)
	{
	new_node->right = parent->right;
	parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
