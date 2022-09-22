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

	while (dest[i] != '\0')
	{
		len++;
	}
	while (len != '\0')
	{
		dest[i] = src[len];
		len++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
