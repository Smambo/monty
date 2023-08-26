#include "monty.h"

/**
 * sub - subtract the top two elements of the stack.
 * @head: head of stack
 * @line_number: line_number
 * Return: no return
 */
void sub(stack_t **head, unsigned int line_number)
{
	int sub;

	if ((*head) == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sub = (*head)->next->n - (*head)->n;
	pop(head, line_number);
	(*head)->n = sub;
}

