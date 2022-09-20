#include "main.h"
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
		if (i == n - 1)
		{
			continue;
			printf(", ");
		}
	}
	printf("\n");
}
