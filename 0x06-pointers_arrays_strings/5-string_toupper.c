#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s: takes in a string
 * Return: changed cases
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}

	return (s);
}
