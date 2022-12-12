#include "main.h"
#include <stdlib.h>
/**
 * _strchr - Locate a character sting
 * @s: The string
 * @c: the character to be located
 * Return: a pointer to the first occurance of the character @c in the string
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
