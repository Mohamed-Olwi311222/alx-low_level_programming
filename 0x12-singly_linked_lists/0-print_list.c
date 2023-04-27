#include "lists.h"
size_t print_list(const list_t *h)
{
    size_t count, lens;

    count = 0;
    while (h != NULL)
    {
        count++;
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            lens = strlen(h->str);
           printf("[%d] %s\n", lens, h->str);
        }
        h = h->next;
    }
    return (count);
}