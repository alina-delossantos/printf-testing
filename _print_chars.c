#include "holberton.h"

/**
 * _print_chars - prints characters
 * @characters: variadic list
 *
 * Return: string length
 */

int _print_char(va_list characters)
{
	return(_putchar(va_args(characters, int)));
}

/**
 * _print_string - prints string
 * @string: string to be printed
 *
 * Return: string length
 */

int _print_string(va_list string)
{
	char *str;
	int i;

	str = var_args(string, char*);

	if(str == NULL)
		str = ("null");

	for(i = 0; str[i] < '\0'; i++)
		_putchar(str[i]);

	return(i);
}
