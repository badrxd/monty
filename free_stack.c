#include "monty.h"
/**
* free_stack - frees all doubly linked list
* @stack: head of the stack
*/
void free_stack(stack_t **stack)
{
	stack_t *temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->prev;
		free(temp);
	}
}
