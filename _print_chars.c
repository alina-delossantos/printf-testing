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

void _print_string(int i, int j, char *string)
{

	for(; i <= j; i++)
		_putchar(string[i]);
}
