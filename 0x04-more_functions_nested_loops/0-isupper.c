#include "main.h"
/**
* _isupper - Check if output is in uppercase or otherwise
*
* @c: - Integer variable to output the characters in ASCII code
*
* Return: Always 0 (success)
*/
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
