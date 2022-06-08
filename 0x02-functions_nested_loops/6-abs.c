#include "main.h"

/**
* _abs - Computes the absolute value of an int
*
* @i: accepts number as  int
*
* Return: absolute value
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
