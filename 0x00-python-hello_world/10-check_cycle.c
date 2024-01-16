#include "lists.h"

/**
 * check_cycle: this is a function that checks if a lsit 
 * has a cycle
 * @list: a list valiable
 * Return: 1 if true else 0
 */
int check_cycle(listint_t *list)
{
	listint_t *pointA, *pointB;

	if (!list || !list->next)
		return (0);
	pointA = list;
	pointB = list;

	while (pointA != NULL && pointB != NULL && pointB->next != NULL)
	{	
		pointA = pointA->next;
		pointB = pointB->next->next;
		if (pointA == pointB)
		{
			return (1);
		}
	}
	return (0);
}
