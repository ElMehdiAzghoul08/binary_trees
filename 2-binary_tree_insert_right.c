#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: oointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node_created, *tempo;

if (parent == NULL)
return (NULL);

node_created = malloc(sizeof(binary_tree_t));
if (node_created == NULL)
return (NULL);

node_created->n = value;
node_created->parent = parent;
node_created->left = NULL;

tempo = parent->right;
parent->right = node_created;
node_created->right = tempo;

if (tempo != NULL)
tempo->parent = node_created;

return (node_created);
}
