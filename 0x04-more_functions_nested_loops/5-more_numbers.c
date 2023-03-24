#include "main.h"

/**
 * more_numbers - print numbers from 0 - 14 10X
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (j <= 10)
	{
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
				_putchar(i + '0');
			i++;
		}
		j++;
	}
}
