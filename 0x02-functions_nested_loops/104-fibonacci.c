#include <stdio.h>
/**
 * main - Print the first 98 fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	float a, b, c;
	int i = 2;

	a = 1;
	b = a + 1;
	c = a + b;
	printf("%.0f, ", a);
	printf("%.0f, ", b);

	while (i < 98)
	{
		i++;
		printf("%.0f", c);

		a = b;
		b = c;
		c = a + b;

		if (i < 98)
		{
			printf(", ");
		}

	}
	printf("\n");
	return (0);
}

