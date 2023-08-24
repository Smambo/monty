#include "monty.h"
void nothing(void);
sq_t sq = {NULL, NULL, NULL, 0};
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	FILE *file;
	char *content = NULL;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	size_t size = 0;
	ssize_t input_line = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	sq.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (input_line > 0)
	{
		input_line = getline(&content, &size, file);
		sq.content = content;
		line_number++;

		if (input_line > 0)
			execute(content, &stack, line_number, file);
		/*free(content);*/
	}
	_free(stack);
	fclose(file);
	return (0);
}
