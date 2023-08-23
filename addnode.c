#include "monty.h"

/**
 * add_node - adds new node at beginning of list
 * @head: head of list
 * @n: node
 * Return: nothing
 */
void add_node(stack_t **head, int n)
{
	stack_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
	{
		temp->prev = new;
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
