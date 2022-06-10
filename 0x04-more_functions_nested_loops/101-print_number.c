#include "main.h"

/**
* print_number - prints an integer.
*
* @n: input integer.
*
* Return: nothing.
*/
void print_number(int n)
{
	unsigned int a, b, count;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	count = 1;

	while (b > 9)
	{
		b /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((a / count) % 10) + 48);
	}
}
