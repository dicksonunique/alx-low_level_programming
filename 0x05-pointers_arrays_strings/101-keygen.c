#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Get random password
 *
 * Return _ Always 0
 */
int main(void)
{
	int rt = 0, i = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		rp = rand() % 128;
		if ((i + rp) > 2772)
		{
			break;
		}
		i = i + rp;
		printf("%c", i);

	}
	return (0);
}


