#include "main.h"

/**
 * print_diagonal - draw diagonal line on terminal
 * @n: the number of times the char '\' should be printed
 */
void print_diagonal(int n)
{
	if (n > 0 || n != 0)
	{
		int i,j;

		for (i = 1; i <= n ; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != 1)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n < 0 || n == 0)
		_putchar('\n');
}
