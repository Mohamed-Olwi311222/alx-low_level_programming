#include "lists.h"
/**
 * before_main - a constructor that is called before main
 */
void __attribute__((constructor)) before_main()
{
    printf("You're beat! and yet,");
    printf(" you must allow,\n");
    printf("I bore my house upon my back!\n");
}
