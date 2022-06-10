#include <stdio.h>

/**
* main - prints largest prime factor.
* Return: Always 0.
*/

int main(void)
{
	long int lgnumb, b;

	lgnumb = 612852475143;
	for (b = 2; b <= lgnumb; b++)
	{
		if (lgnumb % b == 0)
		{
			lgnumb /= b;
			b--;
		}
	}
	printf("%ld\n", b);
	return (0);
}
