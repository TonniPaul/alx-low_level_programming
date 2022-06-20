#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
*
* @s: first string.
* @accept: second string.
*
* Return: string s that matches any character specified in accept
**/
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
