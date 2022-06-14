#include "main.h"

/**
* _atoi - converts a string to an integer.
*
* @s: accept string input.
*
* Return: integer.
*/
int _atoi(char *s)
{
	unsigned int a = 0, b = 0, oi = 0, pn = 1, m = 1, i;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (b > 0 && (*(s + a) < '0' || *(s + a) > '9'))
			break;

		if (*(s + a) == '-')
			pn *= -1;

		if ((*(s + a) >= '0') && (*(s + a) <= '9'))
		{
			if (b > 0)
				m *= 10;
			b++;
		}
	}

	for (i = a - b; i < a; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
