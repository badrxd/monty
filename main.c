#include "monty.h"
glob_v var = {NULL, NULL, NULL, 0};
/**
* main - the monty code interpreter
* @argc: number of arguments
* @argv: monty file path
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	size_t size = 0;
	ssize_t str_len = 1;
	stack_t *head = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	var.file = fopen(argv[1], "r");
	if (!var.file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (str_len > 0)
	{
		var.srt_line = NULL;
		str_len = getline(&var.srt_line, &size, var.file);
		counter++;
		if (str_len > 0)
		{
			run_code(var.srt_line, &head, counter);
		}
		free(var.srt_line);
	}
	free_stack(head);
	fclose(var.file);
return (0);
}
