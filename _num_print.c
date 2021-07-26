#include "holberton.h"

/**
 * _num_print - prints string
 * @n: integer to be printed
 *
 * Return: n
 */

int _num_print(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num / 10)
	{
		_num_print(num / 10);
	}
	_putchar((num % 10) + '0');
	return(n);
}
