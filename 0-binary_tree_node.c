#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Entry point
 *@parent:  a pointer to the parent node of the node to create
 *@value:is the value to put in the new node
 * Return: Always 0 (Success)
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent != NULL)
	{
		if (value < parent->n)
		{
			parent->left = new_node;
		}
		else
		{
			parent->right = new_node;
		}
	}
	return (new_node);
}
