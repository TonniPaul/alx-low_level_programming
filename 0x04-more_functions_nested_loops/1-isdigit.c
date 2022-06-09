#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for a digit (0 through 9).
*
* @c: is an int
*
* Return: 1 if successful and 0 if not
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
