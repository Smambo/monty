#include "monty.h"

/**
 * mul - multiply the top two elements of the stack.
 * @head: stack of head
 * @line_number: line_number
 * Return: no return
 */
void mul(stack_t **head, unsigned int line_number)
{
	int mul;

	if ((*head) == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mul = (*head)->next->n * (*head)->n;
	pop(head, line_number);
	(*head)->n = mul;
}

