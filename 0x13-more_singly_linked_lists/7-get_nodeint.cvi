#include "lists.h"

/**
 * get_nodeint_at_index - returns the nod at a certain index in a lnkd list
 * @head: first node in the lnkd list
 * @index: index of the nod to return
 *
 * Return: pointr to node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
