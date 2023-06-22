#include"monty.h"

/**
* run_code - function to execute the code
* @stack: head of stack
* @counter: line number
*
* Return: 0 on success
*/
int run_code(char *string, stack_t **stack, unsigned int counter)
{
	char *cmd, *value;
	int i = 0;

	instruction_t ops_code[] = {
		{"push", push_f}, {"pall", pall_f},
		{NULL, NULL}
	};
	cmd = strtok(string, " \n\t");
	value = strtok(NULL, " \n\t");
	var.ops_arg = value ? atoi(value) : -1;

	while (ops_code[i].opcode)
	{
		if (strcmp(cmd, ops_code[i].opcode) == 0)
		{
			ops_code[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (ops_code[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, cmd);
		fclose(var.file);
		free(var.string);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	return (0);
}
