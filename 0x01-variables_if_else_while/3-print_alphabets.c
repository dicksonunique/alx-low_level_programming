#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char apha;

	for (apha = 'a'; apha <= 'z'; apha++)
	{
		putchar(apha);
	}
	for (apha = 'A'; apha <= 'Z'; apha++)
	{
		putchar(apha);
	}
	putchar('\n');
	return (0);
}
