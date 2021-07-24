#include "holberton.h"

/**
 * _print_perc - prints percentage symbol
 * @list: variadic list
 *
 * Return: string length
 */

int _print_perc(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return(1);
}

/**
 * _print_chars - prints characters
 * @list: variadic list
 *
 * Return: string length
 */

int _print_char(va_list list)
{
	return(_putchar(va_args(list, int)));
}

/**
 * _print_string - prints string
 * @list: string to be printed
 *
 * Return: string length
 */

int _print_string(va_list list)
{
	char *str;
	int i;

	str = var_args(list, char*);

	if(str == NULL)
		str = ("null");

	for(i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return(i);
}
