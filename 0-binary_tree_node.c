#include "binary_trees.h"
/**
 * binary_tree_insert_left - the function pointer 
 * @parent: pointer node that point to the root of the node
 * @value: the value of the node
 * Return: return binary data type
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t))
	
	if (root == NULL)
		return (NULL)
	
	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;
	return (root)
}
