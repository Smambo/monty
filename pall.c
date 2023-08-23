#include "monty.h"
/**
 * pall - prints all values on the stack, starting from top
 * @stack: head of stack
 * @line_number: stack line number
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	UNUSED(line_number);

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
