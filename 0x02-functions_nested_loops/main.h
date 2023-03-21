void printchar(void)
{
	char lol[] = "_putchar";
	
	int size_of_array = sizeof(lol) / sizeof(lol[0]);

        int count;

        for (count = 0; count <= size_of_array; count++)
                _putchar(chars[count]);
        _putchar('\n');
        return;
}   
