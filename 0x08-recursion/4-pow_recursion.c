#include "main.h"
/**
* _pow_recursion - get x to the power of y
* @x: enter x
* @y: Enter value y as power
* Return: Thex to the power of y
*/

int _pow_recursion(int x, int y)
{
	if  (x == 0)
	{
		return (0);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
