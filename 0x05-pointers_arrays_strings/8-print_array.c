#include "main.h"

/**
* print_array - prints n elements of an array of integers,
* followed by a new line.
*
* @a: accepts array input.
* @n: accepts int input.
*
* Return: nothing.
*/
void print_array(int *a, int n)
{
	int i = 0;

	do {
		i++;
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	} while (i < n);
	printf("\n");
}
