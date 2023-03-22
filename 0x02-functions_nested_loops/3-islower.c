#include "main.h"
#include <ctype.h>
/**
 * _islower - see if its lowercase or not
 *
 * Return: 1 if its lowercase otherwise 0
 */
int _islower(int c){

	char ch = c;

	int is_lower = islower(ch);

	if (is_lower == 0)
		return (0);
	else
		return (1);
}
