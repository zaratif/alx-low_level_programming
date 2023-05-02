#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");

		count++;
		current = current->next;
	}

	return (count);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head of list
 * @str: string to be added to new node
 *
 * Return: address of new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	current = *head;
	while (current->next != NULL)
	current = current->next;

	current->next = new_node;
	return (new_node);
}

/**
 * free_list - frees a list_t list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
	current = head;
	head = head->next;
	free(current->str);
	free(current);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Hello");
	add_node_end(&head, "World");
	add_node_end(&head, "of");
	add_node_end(&head, "Linked");
	add_node_end(&head, "Lists");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
