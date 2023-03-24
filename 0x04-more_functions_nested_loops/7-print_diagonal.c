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

		i = 1;
		j = 1;
		while (i <= n)
		{
			while (j <= i)
			{
				if (j != 1)
					_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}

	if (n < 0 || n == 0)
		_putchar('\n');
}
