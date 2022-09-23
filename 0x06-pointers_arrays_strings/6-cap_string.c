#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @m: a string
 *
 * Return: string
 */

char *cap_string(char *m)
{
	int i;

	if (m[0] >= 97 && m[0] <= 122)
		m[0] -= 32;

	for (i = 1; m[i] != '\0'; i++)
	{
		if ((m[i - 1] == ' ' || m[i - 1] == '\t' || m[i - 1] == '\n'
			|| m[i - 1] == ',' || m[i - 1] == ';' || m[i - 1] == '.'
			|| m[i - 1] == '!' || m[i - 1] == '?' || m[i - 1] == '"'
			|| m[i - 1] == '(' || m[i - 1] == ')' || m[i - 1] == '{'
			|| m[i - 1] == '}') && (m[i] >= 97 && m[i] <= 122))
		{
			m[i] -= 32;
		}
	}

	return (m);
}
