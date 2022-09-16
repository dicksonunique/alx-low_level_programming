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

	for ( i = 0; i <= 50; i++)
	{
		if (i == 0)
		{
			printf("%d\n", term1);
		}
		else if (i == 1)
		{
			printf(", %d", term2);
		}
		else
		{
			next_term = term1 + term2;
			term1 = term2;
			term2 = next_term;
			printf(", %d", next_term);
		}
	}
	printf("\n");
	return (0);
}



