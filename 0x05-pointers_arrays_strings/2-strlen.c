#include "main.h"

/**
 * _strlen - returns length of string
 * @s: the string to be passed
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
