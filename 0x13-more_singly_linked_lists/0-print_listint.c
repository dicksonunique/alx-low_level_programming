#include <stdio.h>
#include "lists.h"
/**
*print_listint - display all elements of a list
*
*@h: Head of the node
*Return: node of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		printf("The link is empty");
	}
	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
