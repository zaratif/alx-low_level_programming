#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t lis
 * @head: pointer to the first element of the list
 *
 * Return: the sum of all the data (n) of the list, or 0 if the
 * list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
