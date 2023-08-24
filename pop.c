#include "monty.h"

/**
 * pop - removes top element of the stack
 * @stack: head of stack
 * @line_number: stack line number
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = *stack;
	*stack = new->next;
	free(new);
}
