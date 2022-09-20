#include "main.h"
#include <stdio.h>
/**
 * print_array - printing N array
 * @a: pointer to the array
 * @n: the number of elements in the array
 */
void print_array(int *a, int n)
{
	int i, len = 0;

	for (i = 0; i < n; i++)
	{
		len++;
		printf("%d", a[i]);
		if (i > 0 && i < (len - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
