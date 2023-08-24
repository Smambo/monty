#include "monty.h"
/**
 * push - pushes element to the stack
 * @stack: head of stack
 * @line_number: stack line number
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *new;
	int push_val;
	char *arg = strtok(NULL, "\n \t");

	if (!check_int(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	push_val = atoi(arg);
	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = push_val;
	new->prev = NULL;
	new->next = NULL;

	if (*stack == NULL)
		*stack = new;
	else if (sq)
	{
		(*stack)->prev = new;
		new->next = *stack;
		*stack = new;
	} else
	{
		temp = *stack;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
}
