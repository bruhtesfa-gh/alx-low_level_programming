#include "main.h"
/**
* print_diagonal - draw a diagonal line in the terminal
* @n: - integer variable for \
* Return: no return
*/
void print_diagonal(int n)
{
	int c, b;

	for (c = 0; c < n; c++)
	{
		for (b = 0; b < c; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (c < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
