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
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
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

/**
 * add_node_end - adds node at end of list
 * @head: head of list
 * @n: node
 * Return: nothing
 */
void add_node_end(stack_t **head, int n)
{
	stack_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new;
		new->prev = NULL;
	} else
	{
		temp->next = new;
		new->prev = temp;
	}
}
