#include "main.h"

/**
* puts2 - priints character of a string from a new line.
*
* @str: string input.
*
* Return: Nothing.
*/
void puts2(char *str)
{
	int a = 0;

	for (a = 0; a >= 0; a++)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (a % 2 == 0)
			_putchar(str[a]);
	}

}
