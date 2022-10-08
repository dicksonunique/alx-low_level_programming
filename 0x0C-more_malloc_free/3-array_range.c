
#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the newly created array if successful
 */

int *array_range(int min, int max)
{
	int diff, i = 0,  *a;

	if (min > max)
		return (NULL);

	diff  = max - min + 1;
	a = malloc(diff * sizeof(*a));

	if (a == NULL)
		return (NULL);

	for (diff = min; diff <= max; diff++)
		a[i++] = diff;
	return (a);
}
