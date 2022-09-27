#include "main.h"
/**
 * _memcpy - Function to copy memory area
 * @dest: destination memory to copy to
 * @src: source memory to copy from
 * @n: number of byte
 * Return: pointer to destination(dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
