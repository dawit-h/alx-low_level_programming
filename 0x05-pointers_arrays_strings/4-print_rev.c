#include "main.h"

/**
 * print_rev - prints reversed string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (s[i++] != '\0')
		len++;

	for (i = len -1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
