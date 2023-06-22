#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"monty.h"

glob_v var = {NULL, NULL, 0, 0};

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: save the monty file location
*
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	char *string;
	FILE *file;
	int counter;
	int ch_size = 1;
	size_t size = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	var.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (ch_size > 0)
	{
		string = NULL;
		ch_size = getline(&string, &size, file);
		var.string = string;
		counter++;
		if (ch_size > 0)
			run_code(string, &stack, counter);
		free(string);
	}
	free_stack(&stack);
	fclose(file);

	return (0);
}
