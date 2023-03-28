#include "main.h"
#include <stdio.h>

/**
 * main - prints fizz if number is multiple of 3
 *	prints buzz if number is multiple of 5
 *	prints fizzbuzz if number is multiple of both 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
