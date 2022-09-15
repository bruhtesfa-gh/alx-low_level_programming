#include "main.h"

/**
 * print_numbers - print numbers to the std
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
