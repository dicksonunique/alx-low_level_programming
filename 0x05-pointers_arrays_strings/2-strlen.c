#include "main.h"
/**
 * _strlen - To find length of string
 * @s: enter string array
 * Return: The number of strings
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
