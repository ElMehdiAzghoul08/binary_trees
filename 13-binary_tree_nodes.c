#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: if tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left != NULL || tree->right != NULL)
        return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

    return (0);
}