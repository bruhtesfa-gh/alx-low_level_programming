#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: an array of characters
 * @n: the number of array characters
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1;  i < n / 2; j--, i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
