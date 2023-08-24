#include "monty.h"
void nothing(void);
int sq = 1;
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
	instruction_t *instruction = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&content, &size, file) != -1)
	{
		line_number++;
		instruction = line_parse(content);

		if (!(instruction->opcode) || instruction->opcode[0] == '#')
		{
			free(instruction);
			if (content != NULL)
				free(content);
			content = NULL;
			continue;
		}
		if (instruction->f)
			instruction->f(&stack, line_number);
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number,
					instruction->opcode);
			if (content)
				free(content);
			if (stack)
				_free(stack);
			free(instruction);
			fclose(file);
			exit(EXIT_FAILURE);
		}
		if (content)
			free(content);
		content = NULL;
		free(instruction);
	}
	if (content)
		free(content);
	_free(stack);
	fclose(file);
	return (0);
}
