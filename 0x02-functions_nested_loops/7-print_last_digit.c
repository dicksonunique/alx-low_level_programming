#include "main.h"
/**
 * print_last_digit - print laas digit of any number
 * @n : Enter integer
 *
 * Return: Integer
 */
int print_last_digit(int n)
{
	int pld  = n % 10;

	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar (pld + '0');
	return (pld);
}
