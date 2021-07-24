#include "holberton.h"

/**
 * printf - produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i;
	int ck = 0, counter = 0;

	if (format)
	{
		va_start(list, format);
	for(i = 0; format[i] ; i++)
	{
		if(!ck)
		{
			if (format[i] != '%')
			{
				counter += _putchar(format[i]);
			}
			else
				ck = 1;
		}
		else
		{
			switch(format[i])
			{
			case 'c':
				counter += _putchar(va_arg(list, int));
				break;
			case 's':
				counter += _print_string(va_arg(list, char *));
				break;
			case '%':
				counter += _putchar(va_arg(list, int));
			}
			ck = 0;
		}
	}
	va_end(list);
	}
	return(i);
}
