#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - print a linked list only one time
 * @head: head of LL
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *slow, *fast, *marker;
	unsigned int counter = 0, flag = 0;

	if (head == NULL)
		return (0);
	marker = slow = head;
	fast = head->next;
	while (head != NULL)
	{
		head = head->next;
		counter++;

		if (flag == 0 && fast != NULL && fast->next != NULL && slow != NULL)
		{
			if (fast == slow)
			{
				flag = 1;
				slow = marker;
			}
			fast = fast->next->next;
		}
		if (flag == 1 && slow == head)
			return (head);
		slow = slow->next;
	}
	return (NULL);
}
