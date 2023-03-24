#include "main.h"

/**
 * jack_bauer - print every minute of the day
 */

void jack_bauer(void)
{
	int h = 0, m = 0;

	for (; h <= 23; h++)
	{
		for (; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}

}
