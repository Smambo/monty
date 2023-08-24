#include "monty.h"
/**
 * swap - adds the top two elements of the stack.
 * @head: stack head
 * @line_number: line number
 * Return: no return
*/
void swap(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);

		fclose(sq.file);
		free(sq.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
