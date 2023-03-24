#include "main.h"

/**
 * print_most_numbers - print numbers from 1 - 9 without 2 & 4
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
