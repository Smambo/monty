#include "monty.h"
/**
 * swap - adds the top two elements of the stack.
 * @head: stack head
 * @line_number: line number
 * Return: no return
*/
void swap(stack_t **head, unsigned int line_number)
{
	int aux;

	if ((*head) == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	aux = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = aux;
}
