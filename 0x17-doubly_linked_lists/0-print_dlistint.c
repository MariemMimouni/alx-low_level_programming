#include "lists.h"
/**
 * print_dlistint - print all elements
 * dlistint_t list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	dlinstint_t *p = h;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
