#include "monty.h"
/**
  *sub- sustract the two top elements
  *@head: stack head
  *@line_nember: line_number
  *Return: no return
 */
void sub(stack_t **head, unsigned line_number)
{
	stack_t *h;
	int sus, nodes;

	h = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(sq.file);
		free(sq.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	sus = h->next->n - h->n;
	h->next->n = sus;
	*head = h->next;
	free(h);
}
