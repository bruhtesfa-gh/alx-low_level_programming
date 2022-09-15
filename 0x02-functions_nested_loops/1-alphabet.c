#include "main.h"

/**
 * print_alphabet - Entry point for programme
 *
 * Description: Prints out the alphabets in lowercase followed by a new line
 *
 * Return: Returns 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
