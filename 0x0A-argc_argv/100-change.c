#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument counter
 * @argv:array of arguments
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	int cent, res = 0, i;
	int money[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && cent >= 0; i++)
	{
		while (cent >= money[i])
		{
		cent = cent - money[i];
		res++;
		}
	}
	printf("%d\n", res);
	return (0);
}
