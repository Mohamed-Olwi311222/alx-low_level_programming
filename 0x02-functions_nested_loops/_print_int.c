#include "main.h"
/**
 * print_int - prints an integer using putchar
 * @n: the integer to print
 * Return: void
 */
void print_int(int n)
{
        char buffer[12];  // buffer to hold string representation of integer
        int i = 0;
        
        if (n < 0) {
                _putchar('-');
                n = -n;
        }
        
        sprintf(buffer, "%d", n);  // convert integer to string
        
        while (buffer[i] != '\0') {
                _putchar(buffer[i]);
                i++;
        }
}
