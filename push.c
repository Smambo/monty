#include "monty.h"
/**
 * push - pushes element to the stack
 * @stack: head of stack
 * @line_number: stack line number
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	int i = 0, flag = 0, n;

	if (sq.arg)
	{
		if (sq.arg[0] == '-')
			i++;
		for (; sq.arg[i] != '\0'; i++)
		{
			if (sq.arg[i] > 57 || sq.arg[i] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(sq.file);
			free(sq.content);
			_free(*stack);
			exit(EXIT_FAILURE);
		}
	} else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(sq.file);
		free(sq.content);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	n = atoi(sq.arg);
	if (sq.order == 0)
		add_node(stack, n);
	else
		add_node_end(stack, n);
}
