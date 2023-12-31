#include "monty.h"

/**
 * mod - computes the rest of the division of
 * second top element by top element
 * @stack: head of stack
 * @line_number: line_number
 * Return: no return
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int mod;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	mod = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = mod;
}
