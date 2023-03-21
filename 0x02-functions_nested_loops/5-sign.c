#include "main.h"

/**
 * print_sign - prints number sign
 * @n: the number to be passed
 * Return: 1 if number greter than 0
 *	0 if number is 0
 *	-1 if number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
