#include "main.h"

/**
 * _abs - returns the absolute value of number
 * @i: the number to be passed
 * Return: the absolute value
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
