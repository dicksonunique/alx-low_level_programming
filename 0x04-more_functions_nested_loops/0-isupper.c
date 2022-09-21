#include "main.h"
/**
 * _isupper - Function check upper case character
 * @c: Enter character
 * Return: 1 if it's upper else 0
 */
int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

