#include "main.h"
/**
 * _strcat - Program to concat two strings
 * @dest:destination string
 * @src: source string
 * Return:append source with destination
 */
char *_strcat(char *dest, char *src)
{
		int i = 0, len = 0;

		while (dest[i++])
			dest_len++;
		for (i = 0; src[i]; i++)
			dest[len++] = src[i];
		return (dest);
}
