#include "lists.h"

/**
 * free_listint_safe - free a LL with a loop
 * @h: head of linked list
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *tmp2;
	unsigned int counter = 0;

	if (*h == NULL || h == NULL)
		return (0);

	tmp = *h;
	while (tmp)
	{
		counter++;
		tmp2 = tmp;
		tmp = tmp->next;
		free(tmp2);
		if (tmp2 <= tmp)
			break;
	}
	*h = 0;
	return (counter);
}
