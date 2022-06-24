#include <stdio.h>
#include <stdlib.h>

/**
* main - Fuction that prints its name.
*
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
*
* Return: Nothing
**/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
