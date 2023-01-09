#include "binary_trees.h"
/**
 * binary_tree_is_full - check full or not
 * @tree: tree of binary
 * Return: 0 if not full or 1 for full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if ((tree->left) && (tree->right))
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
return (0);
}
