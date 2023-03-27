#include <stdlib.h>
#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: format output
 * Return: length if success or -1 if Error
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0, len = 0;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]), len++, i++;
			continue;
		}
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '\0')
			{
				len += print_format(format[i], ptr);
			}
			else
			{
				va_end(ptr);
				return (-1);
			}

		}
		i++;
	}
	va_end(ptr);
	return (len);
}
