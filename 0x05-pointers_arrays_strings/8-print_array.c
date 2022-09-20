#include "main.h"
#include <stdio.h>
/**
 * print_array - printing N array
 * @a: pointer to the array
 * @n: the number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
