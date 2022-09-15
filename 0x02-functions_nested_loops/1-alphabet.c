#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_puthar('\n');
}
