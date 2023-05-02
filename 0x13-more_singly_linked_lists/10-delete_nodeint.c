#include "lists.h"

/**
 * delete_nodeint_at_index - delete te node at index of listint_t
 * @head: double pointer to the head of the list
 * @index: index of the node to delete starting 0
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}

	node = tmp->next;
	tmp->next = node->next;
	free(node);


	return (1);
}
