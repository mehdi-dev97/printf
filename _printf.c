#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: format output
 * Return: length if success or -1 if Error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	len = print_format(format, args);
	va_end(args);
	return (len);
}
