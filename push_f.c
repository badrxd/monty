#include"monty.h"

/**
* push_f - function to push node in stack
* @stack: head of stack
* @counter: line number
*/

void push_f(stack_t **stack, unsigned int counter)
{
	stack_t  *node;

	if (var.ops_arg == -1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		free(var.string);
		free_stack(stack);
		fclose(var.file);
		exit(EXIT_FAILURE);
	}

	node = (stack_t *)malloc(sizeof(stack_t));

	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(var.file);
		free(var.string);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	node->n = var.ops_arg;
	node->next = NULL;
	node->prev = NULL;

	if (*stack == NULL)
	{
		*stack = node;
	}
	else
	{
		(*stack)->next = node;
		node->prev = *stack;
		*stack = node;
	}

}
