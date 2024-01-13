#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return NULL;

	if (idx == 0)
		return add_dnodeint(h, n);

	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;
	return new_node;
}
