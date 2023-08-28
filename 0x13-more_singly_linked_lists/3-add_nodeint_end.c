#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list
 * @head:pointer to node
 * @n: data to added
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = n_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n_node;
	}
	return (*head);

}
