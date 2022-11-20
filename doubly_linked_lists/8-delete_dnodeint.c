#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes node at given index
 *@head: pointer to pointer to head node
 *@index: index where node is to be deleted
 *Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (index == 1)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		index = index - 1;
	}
	return (-1);
}
