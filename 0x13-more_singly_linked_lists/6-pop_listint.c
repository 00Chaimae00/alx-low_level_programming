#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pntr to the first elmnt in the linked list
 *
 * Return: the data inside the elmnts that was deleted,
 * or 0 if the list is totally empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
