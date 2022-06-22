#include "main.h"

/**
* prime_evaluation - returns the natural square root of a number.
*
* @n: input number.
* @c: iterator.
*
* Return: square root or -1.
**/
int prime_evaluation(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime_evaluation(n, c + 1));
}
/**
* is_prime_number - checks if an input number is a prime number.
*
* @n: input number.
*
* Return: 1 if true and 0 if false
**/
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_evaluation(n, 2));
}
