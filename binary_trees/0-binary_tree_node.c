#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node_created;

    node_created = malloc(sizeof(binary_tree_t));
    if (node_created == NULL)
        return (NULL);

    node_created->n = value;
    node_created->parent = parent;
    node_created->left = NULL;
    node_created->right = NULL;

    return (node_created);
}