#include "lists.h"
size_t print_list(const list_t *h)
{
    list_t *node;
    int count, lens;

    node = h;
    count = 0;
    while (node != NULL)
    {
        count++;
        if (node->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            lens = strlen(node->str);
            printf("[%d] %s\n", lens, node->str);
        }
        node = node->next;
    }
    return (count);
}