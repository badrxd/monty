#include "monty.h"
/**
  *sub_f- a sustration
  *@head: the stack head
  *@counter: the line_number
  *Return: no return
 */
void sub_f(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int susb, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(var.file);
		free(var.srt_line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	susb = temp->next->n - temp->n;
	temp->next->n = susb;
	*head = temp->next;
	free(temp);
}
