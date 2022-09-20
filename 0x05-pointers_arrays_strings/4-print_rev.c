#include "main.h"
/**
 * print_rev - print reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len, i, c;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (c = len - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
