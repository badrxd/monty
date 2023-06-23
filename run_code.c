#include "monty.h"
/**
* run_code - get with command and run it
* @head: head linked list - stack
* @counter: line_counter
* @content: line content
* Return: no return
*/
int run_code(char *content, stack_t **head, unsigned int counter)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", pint_f},
				{"pop", pop_f}, {"swap", swap_f}, {"add", add_f},
				{"nop", nop_f}, {"sub", sub_f}, {"div", div_f},
				{"mul", mul_f}, {"mod", mod_f}, {"pchar", pchar_f},
				{"pstr", pstr_f}, {"rotl", rotl_f}, {"rotr", rotr_f},
				{"stack", stack_f}, {"queue", f_queue},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *cmd;

	cmd = strtok(content, " \n\t");
	if (cmd && cmd[0] == '#')
		return (0);
	var.value = strtok(NULL, " \n\t");
	while (opst[i].opcode && cmd)
	{
		if (strcmp(cmd, opst[i].opcode) == 0)
		{	opst[i].f(head, counter);
			return (0);
		}
		i++;
	}
	if (cmd && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, cmd);
		fclose(var.file);
		free(content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	return (1);
}
