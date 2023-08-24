#include "monty.h"

/**
 * line_parse - parses through input to retrieve opcode
 * @content: input to parse through
 * Return: pointer to opcode
 */
instruction_t *line_parse(char *content)
{
	instruction_t *instruction;
	char *opcode;

	opcode = get_opcode(content);
	instruction = malloc(sizeof(*instruction));

	if (instruction == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	instruction->opcode = opcode;
	instruction->f = NULL;

	if (instruction->opcode)
	{
		if (strcmp(instruction->opcode, "push") == 0)
			instruction->f = push;
		if (strcmp(instruction->opcode, "pall") == 0)
			instruction->f = pall;
		if (strcmp(instruction->opcode, "pint") == 0)
			instruction->f = pint;
		if (strcmp(instruction->opcode, "pop") == 0)
			instruction->f = pop;
		if (strcmp(instruction->opcode, "swap") == 0)
			instruction->f = swap;
		if (strcmp(instruction->opcode, "add") == 0)
			instruction->f = add;
		if (strcmp(instruction->opcode, "nop") == 0)
			instruction->f = nop;
	}
	return (instruction);
}
