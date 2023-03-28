#include "main.h"

/**
 * _puts - print string to standard output
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
