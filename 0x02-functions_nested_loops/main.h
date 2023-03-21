void printchar(char chars[])
{
        int count ;

	int size ;


        size = sizeof(chars) / sizeof(chars[0]);

        for (count = 0; count <= size; count++)
                _putchar(chars[count]);
        _putchar('\n');
        return;
}   
