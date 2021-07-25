#include "holberton.h"

/**
 * _nbr_print - prints string
 * @nbr: nbr to be printed
 *
 * Return: string length
 */

int _nbr_print(unsigned int nbr)
{
	unsigned int integ;

	if (nbr < 0)
	{
		_putchar(45);
		integ = nbr * -1;
	}
	else
		integ = nbr;

	if(nbr / 10 != 0)
		_nbr_print(nbr % 10);
	_putchar(0 + (nbr % 10));

	return(0);
}
