#include "main.h"

/**
 * puts_half - print half string
 * @str: the string
 */
void puts_half(char *str)
{
	int i, half;

	i = 0;
	while (str[i] != '\0')
		i++;

	half = i / 2;
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
