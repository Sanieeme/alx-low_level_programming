#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts new node at given position
 * @head: pointer
 * @idx: index
 * @n: data
 * Return: new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node;
	listint_t *temp = *head;
	unsigned int i = 0;

	n_node = malloc(sizeof(listint_t));
	if(n_node == NULL || head == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (NULL);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx -1)
		{
			n_node->next = temp->next;
			temp->next = n_node;
			return (n_node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
