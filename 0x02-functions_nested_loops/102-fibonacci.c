#include <stdio.h>
/**
 * main - Entry point
 * Description : Fibonacci series
 * Return: Nothing
 */

int main(void)
{
	unsigned long term1 = 1, term2 = 2, next_term;
	int i;

	for (i = 0; i <= 50; i++)
	{
		next_term = term1 + term2;
		printf("%lu", next_term);
		term1 = term2;
		term2 = next_term;
		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
