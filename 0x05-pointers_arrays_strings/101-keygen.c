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
	int rp = 0, i = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (i < 2772)
	{
	rp = rand() % 128;
	if ((i + rp) > 2772)
	break;
	i = i + rp;
	printf("%c", i);
	}
	printf("%c\n", (2772 - i));
	return (0);
}


