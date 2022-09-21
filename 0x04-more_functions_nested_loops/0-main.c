#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: alway 0 success
 */
int main(void)
{
	int c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
