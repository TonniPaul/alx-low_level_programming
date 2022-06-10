#include "main.h"

/**
* more_numbers - prints 1-14 ten times
*
* return: 0
*/
void more_numbers(void)
{
	int x10, num;

	for (x10 = 0; x10 < 10; x10++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
