#include "main.h"

/**
 * _memset - function that fills n bytes of memory with const b with pointed memory area s
 * @s: pointer to char
 * @b: a var to be set on the n bytes of memory
 * @n: the number of byte to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return s;
}
