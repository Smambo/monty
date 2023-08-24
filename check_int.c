#include "monty.h"

/**
 * check_int - checks if string is int
 * @str: string to be checked
 * Return: if true 1, otherwise 0
 */
int check_int(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	if (*str == '-')
		i++;
	for (; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
