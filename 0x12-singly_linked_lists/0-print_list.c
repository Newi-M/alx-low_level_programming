#include "lists.h"

/**
 * print_list - print list
 * @h: linkked list
 * 
 * Return: number of nodes
 */
 size_t print_list(const list_t *h)
 {
   if (h->str == NULL)
    printf("[%d] %s", 0, (nil));
 
