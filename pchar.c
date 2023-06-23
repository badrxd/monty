#include "monty.h"
/**
 * pchar_f - prints the char at the top of the stack,
 * followed by a new line
 * @head: the stack head
 * @counter: the line_number
 * Return: have no return
*/
void pchar_f(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	temp = *head;
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(var.file);
		free(var.srt_line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(var.file);
		free(var.srt_line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}
