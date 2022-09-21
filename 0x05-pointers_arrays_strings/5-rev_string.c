#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - function to reverse string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
	int i;
	char t;

	for (i = _strlen(s) - 1; i >= _strlen(s) / 2; i--)
	{
		t = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = t;
	}
}
