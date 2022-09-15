#include "main.h"
/**
* _isdigit - Check if output is digit or otherwise
*
* @c: - Integer variable to output the characters in ASCII code
*
* Return: Always 0 (success)
*/
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
