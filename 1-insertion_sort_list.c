#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to the list head
 * Return: no return
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *head1, *head2, *tmp1, *tmp2;
	int flag;

	if (list)
	{
		head1 = *list;
		head2 = *list;
		while (list && head1->next)
		{
			if (head1->next)
			{
				flag = 0;
				head2 = head1;
				while (head2 && head2->n > head2->next->n)
				{
					tmp1 = head2;
					tmp2 = head2->next;
					tmp1->next = tmp2->next;
					if (tmp2->next)
						tmp2->next->prev = tmp1;
					if (tmp2)
					{
						tmp2->prev = tmp1->prev;
						tmp2->next = tmp1;
					}
					if (tmp1)
						tmp1->prev = tmp2;
					if (tmp2->prev)
						tmp2->prev->next = tmp2;
					head2 = tmp2->prev;
					if (!tmp2->prev)
						*list = tmp2;
					print_list(*list);
					flag = 1;
				}
			}
			if (flag == 0)
				head1 = head1->next;
		}
	}
}
