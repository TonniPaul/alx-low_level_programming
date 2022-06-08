#include "main.h"
/**
* main- print alphabet using _putchar in lower case
*
* return - 0 (success)
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
