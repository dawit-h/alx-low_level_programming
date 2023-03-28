#include "main.h"

/**
 * print_line - prints straight line in terminal
 * @n: the number of times the char _ to be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0 || n != 0)
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}

	_putchar('\n');
}
