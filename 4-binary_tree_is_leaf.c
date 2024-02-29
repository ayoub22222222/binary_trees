#include "binary_trees.h"
/**
 * binary_tree_is_leaf - funtion check if node is leaf
 * @node: pointer to the given node
 * Return: return 1 in case of success
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

