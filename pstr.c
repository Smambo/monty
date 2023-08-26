#include "monty"

/**
 * pstr - prints string at the top of the stack
 * @stack : hea of stack
 * @line_number: opcode line
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	UNUSED(line_number);
	new = *stack;

	if  (new == NULL)
		printf("\n");
	while (new->n != 0 && isascii(new->n))
	{
		printf("%c", new->n);
		new = new->next;
	}
	printf("\n");

}
