#include "main.h"

/**
 * print_format - print to stdout
 * @c: character to check
 * @ptr: fromwe can get value to print
 * Return: length of string
 */
int print_format(char c, va_list ptr)
{
	int len = 0;

	if (c == '%')
	{
		_putchar('%');
		len++;
	}
	else if (c == 'c')
	{
		_putchar(va_arg(ptr, int));
		len++;
	}
	else if (c == 's')
	{
		len += print_string(va_arg(ptr, char *));
	}
	else if (c == 'd' || c == 'i')
	{
		len += print_numers(va_arg(ptr, int));
	}
	else
	{
		_putchar('%');
		_putchar(c);
		len += 2;
	}
	return (len);
}
