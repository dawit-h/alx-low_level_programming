#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers upto 98
 * @n: starting point number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d ,", n--);
		}
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d ,", n++);
		}
		printf("%d\n", n);
	}
}
