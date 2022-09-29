#include "main.h"

/**
 * workable - Finds the square root of two numbers
 *
 * @i: The number
 * @j: The number to test for the square root of @i
 *
 * Return: square root
 */

int workable(int i, int j)
{
	if (j * j > i)
		return (-1);

	else if (j * j == i)
		return (j);

	else
		return (workable(i, j + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (workable(n, 1));
}
