#include <stdio.h>

/**
 * main - print alphabet in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}
