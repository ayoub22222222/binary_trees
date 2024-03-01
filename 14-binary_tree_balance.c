#include "binary_trees.h"
/**
 * binary_tree_balance - function
 * @tree: pointer to a tree
 * Return: integer
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - function
 * @tree: A pointer to a node
 * Return: the hieght of th tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
