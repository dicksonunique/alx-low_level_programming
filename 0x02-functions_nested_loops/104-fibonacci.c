#include <stdio.h>
/**
 * main - Print the first 98 fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long a , b , c;
	int i = 2;

	a = 1;
	b = 2;
	c = a + b;
	printf("%lu, ", a);
	printf("%lu, ", b);

	while (i < 98)
	{
		i++;
		printf("%lu", c);

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

