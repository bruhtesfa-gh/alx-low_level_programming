#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a statement
 *
 * Description: A C program that prints a statement to the standard error.
 *
 * Return: return 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
