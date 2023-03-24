#include "main.h"
#include <stdio.h>

/**
 * times_table - print times table
 */
void times_table(void)
{
	int i, j;
	int sum;

	for (i = 0; i <= 9 ; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			sum = j * i;

			if (sum <= 9)
			{
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
