#include "binary_trees.h"
/**
 * binary_tree_inorder - function
 * @tree: pointer to the tree
 * @func: pointer to a function
 * Return: nothing
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

