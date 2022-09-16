include "main.h"
/**
 * print_times_table - Print n times table from 0
 * @n: enter a number
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if ( b == 0)
				{
					_putchar(c + '0');
				}
			}
		}
	}
}

