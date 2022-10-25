#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to pointer to head
 * Return: new head at the last node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tail, *new_head;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	tail = *head;
	new_head = (*head)->next;
	tail->next = NULL;
	*head = new_head;
	while (*head)
	{
		*head = (*head)->next;
		new_head->next = tail;
		tail = new_head;
		new_head = (*head);
	}
	*head = tail;
	return (*head);
}
