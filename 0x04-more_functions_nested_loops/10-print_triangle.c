#include "main.h"

/**
 * print_triangle - output to the std
 * @size: size of the triangle
 *
 * Return: Return void
 */

void print_triangle(int size)
{
	int i = 0, j;
	int n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
