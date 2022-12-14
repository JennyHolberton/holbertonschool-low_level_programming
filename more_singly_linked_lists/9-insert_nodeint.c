#include "lists.h"

/**
 *insert_nodeint_at_index - inserts node at any given position
 *@head: pointer to head node
 *@idx: index where node should be added
 *@n: integer to be added to list
 *Return: address of the new node. NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node;

	current_node = *head;
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current_node != NULL)
	{
		if (idx == 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		idx = idx - 1;
	}
	return (NULL);
}
