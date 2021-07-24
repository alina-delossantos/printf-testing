#include "holberton.h"

/**
 * _print_perc - prints percentage symbol
 * @list: variadic list
 *
 * Return: string length
 

int _print_perc(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return(1);
}


 * _print_char - prints characters
 * @list: variadic list
 *
 * Return: string length
 

int _print_char(va_list list)
{
	return(_putchar(va_arg(list, int)));
}
*/

/**
 * _print_string - prints string
 * @list: string to be printed
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
