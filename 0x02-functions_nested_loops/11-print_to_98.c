#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98
*
* @n: input number
*
* Return: no return value
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%i, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%i, ", n);
		}
	}
	printf("%i\n", n);
}
