#include "main.h"
/**
 * print_last_digit - writes the character c to stdout
 * *@n: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{ int lg = n % 10;
	if (lg < 0)
	{
		lg *= -1;
	}
	_putchar('0' + lg);
	return (lg);
}
