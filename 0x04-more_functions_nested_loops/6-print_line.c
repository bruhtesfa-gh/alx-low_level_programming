#include "main.h"
/**
* print_line - draw a straight line in the terminal
* @n: - integer variable for _
* Return: no return
*/
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
