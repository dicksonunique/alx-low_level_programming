#include "main.h"
/**
 * puts2 - print even strings
 * @str: get string
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
	{
		len++;
	}
	for (i = 0; i >= len / 2; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

