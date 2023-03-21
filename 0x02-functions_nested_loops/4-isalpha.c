#include "main.h"

/**
 * _isalpha - checks if char is alpha or not
 * @c: char to be passed
 * Return: 1 if it's alpha 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
