#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node_created;

if (parent == NULL)
return (NULL);

node_created = binary_tree_node(parent, value);
if (node_created == NULL)
return (NULL);

if (parent->left != NULL)
{
node_created->left = parent->left;
node_created->left->parent = node_created;
}

parent->left = node_created;

return (node_created);
}
