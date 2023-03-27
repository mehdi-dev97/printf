#include <stdarg.h>
#include "main.h"
/**
 * printer - print to stdout
 * @c: character to check
 * @ptr: fromwe can get value to print
 * Return: length of string
 */
int print_char(char c, va_list ptr)
{
	int len = 0;

	switch (c)
	{
		case '%':
			_putchar('%');
			len++;
		break;
		case 'c':
			_putchar(va_arg(ptr, int));
			len++;
		break;
		case 's':
			len += print_string(va_arg(ptr, char *));
		break;
		default:
			_putchar('%');
			_putchar(c);
			len += 2;
		break;
	}
	return (len);
}
