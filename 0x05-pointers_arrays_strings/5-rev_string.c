#include "main.h"
/**
 * rev_string - function to reverse string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
	int len, i;
	char t;

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
}