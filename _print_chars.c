#include "holberton.h"

/**
 * _print_string - prints string
 * @string: string to be printed
 *
 * Return: string length
 */

int _print_string(char *string)
{
	int i;

	for(i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return(i);
}
