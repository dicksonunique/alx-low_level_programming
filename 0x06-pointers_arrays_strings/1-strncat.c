#include "main.h"
/**
 * _strncat - Concatenate two strings by n byte
 * @dest: destination string
 * @src:dest
 * @src: source string
 * @n: number of byte string
 * Return: Concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
		int i, j;

		i = 0;
		j = 0;
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0' && j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0'
		return (dest);
}

