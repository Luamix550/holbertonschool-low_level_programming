#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to struct
 * Return: NUmber of the elements list_t
*/
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
