#include "monty.h"
/**
 * pstr_f - prints the string starting at the top of the stack,
 * followed by a new
 * @head: the stack head
 * @counter: the line_number
 * Return: have no return
*/
void pstr_f(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
