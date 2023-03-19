#include <stdio.h>

/**
 * main - print lowercase alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			a++;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
