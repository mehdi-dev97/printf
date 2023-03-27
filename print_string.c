#include "main.h"
#include <stdlib.h>
/**
  * print_str - print string
  * @s: string
  * Return: lenght of string
  */
int print_string(char *s)
{
	int len = 0;
	char *ss = "(null)";

	if (s == NULL)
	{
		for (len = 0; ss[len] != '\0'; len++)
		{
			_putchar(ss[len]);
		}
		return (6);
	}
	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	return (len);
}
