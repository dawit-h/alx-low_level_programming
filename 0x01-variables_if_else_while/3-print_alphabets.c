#include <stdio.h>

/**
 * main - print alphabet in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'A', b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
