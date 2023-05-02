#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t list
 * @head: pointer to pointer to the head node
 *
 * Return: the data (n) of the head node that was deleted
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
