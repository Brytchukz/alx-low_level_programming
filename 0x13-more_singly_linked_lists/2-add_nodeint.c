#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t list.
 * @head: first node of the linked list
 * @n: new value of the new node
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t nodePtr first;

	nodePtr first = NULL;

	first = malloc(sizeof(listint_t));
	if (nodePtr first == NULL)
		return(NULL);

	nodePtr first.n = n;
	nodePtr first.next = *head;

	*head = nodePtr first;
	
	return (*head);
}
