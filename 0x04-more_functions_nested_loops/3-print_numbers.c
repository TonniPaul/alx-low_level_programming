#include "main.h"

/**
* print_numbers - Write a function that prints the numbers,
* from 0 to 9, followed by a new line.
*
* Return: 0
*/
void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
