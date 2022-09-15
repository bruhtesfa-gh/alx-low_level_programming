#include "main.h"

/**
 * print_sign - Entry point for programme
 *
 * @n: Number to check
 *
 * Description: Funtion prints the sign of a number given values
 *
 * Return: Returns 0 or 1
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		value = 0;
	}
	else
	{
		_putchar('-');
		value = -1;
	}
	return (value);
}
