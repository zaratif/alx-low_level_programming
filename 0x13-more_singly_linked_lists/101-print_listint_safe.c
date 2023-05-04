#include "lists.h"

/**
 * print_listint_safe - to print a listint_t linked list
 * @head: a pointer to the first node of the list
 *
 * Return: the number of nodes in the listint_t list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *node;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;

		node = head->next;
		if (node >= head)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}

		head = node;
	}

	return (i);
}
