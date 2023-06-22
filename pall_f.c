#include"monty.h"

/**
* pall_f - function for desplaing list element
* @stack: head of stack
* @counter: line number
*/

void pall_f(stack_t **stack, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}

}
