#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: the number to be passed
 * Return: the last number
 */
int print_last_digit(int n)
{
	int j = n % 10;

	if (j < 0)
		j *= -1;
	_putchar(j + '0');
	return (j);
}
