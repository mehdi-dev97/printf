#include "main.h"
#include <unistd.h>

/**
 * print_numers - print numbers to stdout
 * @n: numbers
 * Return: length of printed numbers
 */
int print_numers(int n)
{
	char buffer[16];
	int i = 0;
	int len = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	do {
		buffer[i++] = n % 10 + '0';
		n /= 10;
		len++;
	} while (n);
	while (i--)
	{
		write(1, &buffer[i], 1);
	}
	return (len + 1);
}
