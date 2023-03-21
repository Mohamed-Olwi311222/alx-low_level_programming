#include "_putchar.c"
void printchar(char lol[], int size_of_array ,int count)
{


	for (count = 0; count < size_of_array; count++)
		_putchar(lol[count]);
	_putchar('\n');
	return;
}
