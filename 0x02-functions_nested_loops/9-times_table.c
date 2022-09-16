#include "main.h"
/**
 * times_table - Print 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j , result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result == 0)
			{
				_putchar('0');
			}
			else if (result < 10 && != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}


