#include "lists.h"
size_t print_list(const list_t *h)
{
    size_t count;

    count = 0;
    while (h)
    {
        count++;
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            lens = strlen(h->str);
           printf("[%d] %s\n", strlen(h->str), h->str);
        }
        h = h->next;
    }
    return (count);
}