#include "main.h"
/**
 * _strcpy - copy string to a destination
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

