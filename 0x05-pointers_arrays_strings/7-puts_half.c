#include "main.h"

/**
* puts_half - prints half of a string.
*
* @str: accepts string.
*
* Return: nothing.
*/
void puts_half(char *str)
{
	int b = 0, i;

	for (b = 0; b >= 0; b++)
	{
		if (str[b] == '\0')
			break;
	}

	if (b % 2 == 1)
	{
		i = b / 2;
	} else
	{
		i = (b - 1) / 2;
	}
	for (i++; i < b; i++)
		_putchar(str[i]);
	_putchar('\n');
}
