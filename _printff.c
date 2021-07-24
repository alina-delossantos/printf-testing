#include "holberton.h"
int _printf(const char *format, ...)
{
	int a, flag = 0;

	for (a = 0; format[a] != '\0'; a++)
	{
		if (!flag)
		{
			if (format[a] != '%')
				_putchar(format[a]);
			else
				flag = 1;
		}
		else
		{
			switch(format[a])
			{
				case 'c':
					_putchar('o');
					break;
				case 's':
					_putchar('k');
					break;
				case '%':
					_putchar('a');
					break;
			}
			flag = 0;
		}
	}
	return(a);
}
