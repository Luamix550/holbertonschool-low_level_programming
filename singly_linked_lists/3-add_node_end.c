#include "lists.h"
/**
 * add_node_end - adds a new node at the end ot a list_t list
 * @head: pointer to pointer
 * @str: string to duplicate to new node
 * Return: return address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
