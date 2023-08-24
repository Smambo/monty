#include "monty.h"

/**
 * get_opcode - retrieves opcode from a string
 * @str: string to get opcode from
 * Return: opcode
 */
char *get_opcode(char *str)
{
	char *opcode;

	opcode = strtok(str, "\n\t");
	return (opcode);
}
