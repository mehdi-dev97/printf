#include "main.h"

/**
 * print_format - print string using format.
 * @format: format output
 * @args: argument list
 * Return: length of string
 */
int print_format(const char *format, va_list args)
{
	int i;
	int len;
	char *str;
	char ch;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format++;
			switch (format[i])
			{
				case 's':
					str = va_arg(args, char *);
					for (i = 0; i < str[i]; i++)
					{
						write(STDOUT_FILENO, &str[i], 1);
					}
					len++;
					break;
				case 'c':
					ch = va_arg(args, int);
					write(STDOUT_FILENO, &ch, 1);
					len++;
					break;
				default:
					len++;
					continue;
			}
			i++;
		}
		else
		{
			write(STDOUT_FILENO, &format[i], 1);
			len++;
		}
	}
	return (len);
}
