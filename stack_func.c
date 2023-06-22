#include "monty.h"
/**
 * f_push - add node to the stack (doubly list)
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (var.value)
	{
		if (var.value[0] == '-')
			j++;
		for (; var.value[j] != '\0'; j++)
		{
			if (var.value[j] > 57 || var.value[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(var.file);
			free(var.srt_line);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(var.file);
		free(var.srt_line);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(var.value);
	if (var.lifi == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}


/**
 * f_pall - prints the stack (doubly list)
 * @head: stack head
 * @counter: will not use it
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
