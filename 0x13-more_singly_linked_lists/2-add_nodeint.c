#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * list
 * @head: a pointer to the head of the listint_t list
 * @n: the integer to store in the new node
 *
 * Return: if memory allocation fails or head is NULL, return NULL
 * or else return the adress of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
