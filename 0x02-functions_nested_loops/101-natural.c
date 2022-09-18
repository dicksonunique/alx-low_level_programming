#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing multiples of 3 and less than 1024
 * Return: Alway 0 (success)
 */

int main(void)
{
	int j, k = 0;

	while (j < 1024)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			k = k + j;
		}
		j++;
	}
	printf("%d\n", k);
	return (0);
}

