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
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
