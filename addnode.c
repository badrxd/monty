#include "monty.h"
/**
 * add_node - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void add_node(stack_t **head, int n)
{

	stack_t *node, *temp;

	temp = *head;
	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = node;

	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
}
