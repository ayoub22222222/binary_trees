#include "binary_trees.h"
/**
 * binary_tree_size - function that give you the size of a tree
 * @tree: pointer to the tree
 * Return: the size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
