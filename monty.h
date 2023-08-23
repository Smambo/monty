#ifndef MONTY_H
#define MONTY_H

#define UNUSED(x) (void)(x)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct sq_s - monty variables
 * @arg: argument
 * @file: monty file
 * @content: line content
 * @order: flag to determine stack/queue order
 *
 * Description: strcuture handles vatiables
 * for the monty program
 */
typedef struct sq_s
{
	char *arg;
	FILE *file;
	char *content;
	int order;
} sq_t;

void nop(stack_t **head, unsigned int line_number);
void add(stack_t **head, unsigned int line_number);
void swap(stack_t **head, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void _free(stack_t *head);
int execute(char *content, stack_t **head,
		unsigned int line_number, FILE *file);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
extern sq_t sq;

#endif /* MONTY_H */
