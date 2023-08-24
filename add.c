#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @head: stack of head
 * @line_number: line_number
 * Return: no return
*/
void add(stack_t **head, unsigned int line_number)
{
	int aux;

	if ((*head) == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = (*head)->n + (*head)->next->n;
	pop(head, line_number);
	(*head)->n = aux;
}
