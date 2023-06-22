#include "monty.h"
/**
 * swap_f - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void swap_f(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, temp2;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(var.file);
		free(var.srt_line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	temp2 = temp->n;
	temp->n = temp->next->n;
	temp->next->n = temp2;
}
