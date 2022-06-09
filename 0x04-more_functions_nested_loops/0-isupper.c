 #include "main.h"

/**
* _isupper- checks for uppercase character.
*
* @c: is the int
*
* Return: (1) successful
*/

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
