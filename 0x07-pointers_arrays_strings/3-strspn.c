#include "main.h"

/**
* _strspn - Locates a character in a string
*
* @s: This is the main C string to be scanned.
* @accept: This is the string containing the list of characters to match in s
*
* Return: return count
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
