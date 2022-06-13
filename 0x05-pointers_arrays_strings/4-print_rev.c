#include "main.h"

/**
* print_rev - prints a string, in reverse, followed by a new line.
*
* @s: input string.
*
* Return: nothing.
*/
void print_rev(char *s)
{
	int count = 0;

	for (count = 0; count >= 0; count++)
	{
		if (s[count] == '\0')
			break;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
