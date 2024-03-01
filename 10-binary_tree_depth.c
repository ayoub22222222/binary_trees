#include "binary_trees.h"
/**
 * binary_tree_depth - function
 * @tree: pointer to a tree
 * Return: return size_t data type
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ?
			1 + binary_tree_depth(tree->parent) : 0);
}
