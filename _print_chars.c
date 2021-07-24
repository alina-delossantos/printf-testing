#include "holberton.h"

/**
 * _print_chars - prints characters
 * @var_list: list
 *
 * Return: string length
 */

int _print_char (va_list var_list)
{
	return(_putchar(va_args(var_list, int)));
}
