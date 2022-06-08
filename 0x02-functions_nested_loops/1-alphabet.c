#include "main.h"

/**
*main- print_alphabet a-z in lower case
*
*return (0) if successful
*/

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
