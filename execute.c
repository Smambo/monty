#include "monty.h"

/**
 * execute - executes opcodes
 * @content: line input
 * @head: head of stack
 * @line_number: line counter
 * @file: monty file
 * Return: nothing
 */
int execute(char *content, stack_t **head,
		unsigned int line_number, FILE *file)
{
	instruction_t ops[] = {
				{"push", push},
				{"pall", pall},
				{"swap", swap},
				{"add", add},
				{"nop", nop},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");

	if (op && op[0] == '#')
		return (0);
	sq.arg = strtok(NULL, " \n\t");

	while (ops[i].opcode && op)
	{
		if (strcmp(op, ops[i].opcode) == 0)
		{
			ops[i].f(head, line_number);
			return (0);
		}
		i++;
	}
	if (op && ops[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
		fclose(file);
		free(content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	return (1);
}
