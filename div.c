#include "monty.h"

/**
 * _div - divides the top two elements of the stack.
 * @head: stack of head
 * @line_number: line_number
 * Return: no return
 */
void _div(stack_t **head, unsigned int line_number)
{
	int div;

	if((*head) == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	div = (*head)->next->n / (*head)->n;
	pop(head, line_number);
	(*head)->n = div;
}
