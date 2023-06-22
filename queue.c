#include "monty.h"
/**
 * f_queue - prints the top of stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	var.lifi = 1;
}

/**
 * add_queue - add node to the tail of stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void add_queue(stack_t **head, int n)
{
	stack_t *node, *temp;

	temp = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
	}
	node->n = n;
	node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = node;
		node->prev = NULL;
	}
	else
	{
		temp->next = node;
		node->prev = temp;
	}
}
