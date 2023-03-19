#include <stdio.h>

/**
 * main - print lower alphabet
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}
