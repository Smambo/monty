#include "monty.h"

/**
 * pchar - prints character at the top of stack
 * @stack: head of stack
 * @line_number: opcode line
 * Return: nothing
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (!isascii((*stack)->n))
	
{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
