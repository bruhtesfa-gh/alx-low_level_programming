#include "main.h"

/**
 * print_last_digit - Entry point for programme
 *
 * @n: Integer value to check
 *
 * Description: This function that prints the last digit of a number.
 *
 * Return: Returns the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit *= (-1);
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}
