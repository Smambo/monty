#include "monty.h"

/**
 * _free - free doubly linked list
 * @head: head of list
 * Return: nothing
 */
void _free(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
