#include "main.h"
/**
 * puts2 - print even strings
 * @str: get string
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; i >= _strlen(str) / 2; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

