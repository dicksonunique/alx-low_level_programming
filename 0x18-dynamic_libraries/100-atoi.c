#include "main.h"
/**
 * _atoi - convert strint into integer
 * @s: string to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int sn = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
		{
			sn *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
	} while (*s++);
	return (sn * num);
}

