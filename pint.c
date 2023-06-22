#include "monty.h"
/**
 * pint_f - prints the top of stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void pint_f(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(var.file);
		free(var.srt_line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
