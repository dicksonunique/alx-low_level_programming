#include "main.h"
/**
 * puts_half - print the last half of string;
 * @str: string to be inputed
 */
void puts_half(char *str)
{
	int i, len, n;

	i = 0;
	len = 0;

	while (str[i++])
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		n = len / 2;

	}
	else
	{
		n = (len + 1) / 2;
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
