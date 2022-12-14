#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	int cent, coins = 0;

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}

		cent = atoi(argv[1]);

		while (cent > 0)
		{
			if (cent % 25 == 0)
			{
				cent = cent - 25;
			} else if (cent % 10 == 0)
			{
				cent -= 10;
			} else if (cent	 % 5 == 0)
			{
				cent -= 5;
			} else if (cent % 2 == 0)
			{
				cent -= 2;
			} else
			{
				cent--;
			}
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
