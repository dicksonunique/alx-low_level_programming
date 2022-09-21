#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Generate keygens
 *
 * Return: Always 0
 */
int main(void)
{
	int p[110];
	int i, s, j;

	s = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 88;
		s = s + (p[i] + '0');
		putchar(p[i] + '0');
		if ((2772 - s) - '0' < 88)
		{
			j = 2772 - s - '0';
			s= s + j;
			putchar(j + '0');
			break;
		}
	}
	return 0;
}
