#include "monty.h"
/**
  *rotr_f- rotates the stack to the bottom
  *@head: the stack head
  *@counter: the line_number
  *Return: no return
 */
void rotr_f(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *temp;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}
