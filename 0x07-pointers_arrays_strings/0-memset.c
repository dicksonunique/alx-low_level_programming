#include "main.h"
/**
 * _memset -fills memory with a constant byte.
 * @s : Pointer to memory area to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigne int j;

	for (j = 0; j < n, j++)
	{
		s[j] = b;
	}
	return (s);
}
