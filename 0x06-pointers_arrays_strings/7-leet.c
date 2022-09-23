#include "main.h"

/**
 * leet - encode characters
 * @m: an array of characters to encode
 *
 * Return: encoded characters
 */

char *leet(char *m)
{
	int x, y;

	char lets[] = "aeotlAEOTL";
	char nums[] = "4307143071";

	for (x = 0; m[x] != '\0'; x++)
	{
		for (y = 0; lets[y] != '\0'; y++)
		{
			if (m[x] == lets[y])
			{
				m[x] = nums[y];
			}
		}
	}

	return (m);
}
