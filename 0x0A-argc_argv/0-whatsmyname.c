#include <stdio.h>
#include "main.h"
/**
*main - program that prints its name
*@argc: count the number of arguement
*@argv: aguement array
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
