#ifndef sort_h
#define sort_h

/* libraries */
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/* struct double linked list */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void _ssort(int *a, int size, int n);
void counting_sort(int *array, size_t size);


#endif
