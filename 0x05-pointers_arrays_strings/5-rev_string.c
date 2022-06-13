#include "main.h"

/**
* rev_string - Reverses a string
*
* @s: accept string.
*
* Return: nothing.
*/
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	for (count = 0; count >= 0; count++)
	{
		if (s[count] == '\0')
			break;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
