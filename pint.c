#include "monty.h"

/**
 * pint - prints value at the top of the stack
 * @stack: head of stack
 * @line_number: stack line number
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
