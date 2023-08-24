#include "monty.h"

/**
 * _free - free doubly linked list
 * @head: head of list
 * Return: nothing
 */
void _free(stack_t *head)
{
	stack_t *temp;

	if (!head)
		return;

	temp = head;
	while (temp)
	{
		head = temp;
		temp = head->next;
		free(head);
	}
}
