#include "main.h"

/**
 * rot13 - encode characters with rot13 technology
 * @m: an array of characters
 *
 * Return: encoded string
 */

char *rot13(char *m)
{
	int i = 0, j = 0;

	char lets1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lets2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (m[i] != 0)
	{
		for (j = 0; j <= 52; j++)
		{
			if (m[i] == lets1[j])
			{
				m[i] = lets2[j];
				break;
			}
		}
		i++;
	}

	return (m);
}
