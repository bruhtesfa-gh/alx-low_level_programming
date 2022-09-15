#include "main.h"

/**
 * print_line - output to the std
 * @n: the number of times the line will be printed
 *
 * Return: Return a line
 */

void print_line(int n)
{
	int j = 0;

	if (n > 0)
	{
		for (; j < n; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
