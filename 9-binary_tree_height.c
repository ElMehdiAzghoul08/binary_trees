#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: NULL or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_tree_ht, right_tree_ht;

if (tree == NULL)
return (0);

left_tree_ht = binary_tree_height(tree->left);
right_tree_ht = binary_tree_height(tree->right);

if (left_tree_ht > right_tree_ht)
return (left_tree_ht + 1);
else
return (right_tree_ht + 1);
}
