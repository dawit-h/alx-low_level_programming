#include <stdio.h>

/**
 * main - print sth
 *
 * Return: 1
 */
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (int i = 0; i < sizeof(c); i++)
	{
		putchar(c[i]);
	}
	return (1);
}
