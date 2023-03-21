void printchar(void)
{
	char lol[] = "_putchar" ;

	int count;

	int size_of_arr = sizeof(lol) / sizeof(lol[0]);

	for (count = 0; count <= size_of_arr; count++)
		_putchar(lol[count]);
	_putchar('\n');
	return;
}
