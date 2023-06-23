#include "monty.h"
/**
  *rotl_f- rotates the stack to the top
  *@head: the stack head
  *@counter: the line_number
  *Return: have no return
 */
void rotl_f(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *temp2;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	temp2 = (*head)->next;
	temp2->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = temp2;
}
