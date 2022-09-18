#include <stdio.h>
/**
 * main - Entry point
 * Description : Fibonacci series
 * Return: Nothing
 */

int main(void)
{
	int term1 = 1, term2 = 2;
	int i, next_term;

	for (i = 0; i <= 50; i++)
	{
		next_term = term1 + term2;
		printf("%d", next_term);
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
	return (0);
	}
}
