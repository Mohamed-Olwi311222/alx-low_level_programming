#include "function_pointers.h"
/**
 * print_name - prints name given to it
 * @name: name given to it
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
