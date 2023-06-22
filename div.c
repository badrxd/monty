#include "monty.h"
/**
 * div_f - divides the top two elements of the stack.
 * @head: the stack head
 * @counter: the line number
 * Return: no return
*/
void div_f(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(var.file);
		free(var.srt_line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(var.file);
		free(var.srt_line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp2 = temp->next->n / temp->n;
	temp->next->n = temp2;
	*head = temp->next;
	free(temp);
}
