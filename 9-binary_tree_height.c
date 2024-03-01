#include "binary_trees.h"
/**
 * binary_tree_height - function 
 * @tree: pointer to a tree
 * Return: return size_t data type
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree == NULL)
		return (NULL);

	while (tree != NULL && tree->parent->left != NULL)
	{
		counter += 1;
		tree->parent->left = tree->parent->left;
	}
	return (counter);
}
