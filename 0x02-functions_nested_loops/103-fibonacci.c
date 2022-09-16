#include <stdio.h>
/**
 * main - compute and print even numbers in fibonacci
 * follow by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int term1 = 0, sum = 0, term2 = 1, next, i = 0;

	while ( i < 4000000)
	{
		next = term1 +terms2;
		term1 = term2;
		term2 = next;
		if (next % 2 == 0)
		{
			sum = sum + next;
			i++;
		}	
	}
	printf("%d\n", sum);
	return (0);
}



