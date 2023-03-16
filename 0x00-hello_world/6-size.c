#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 's';
    int x = 3;
    long int y = 4;
    long long int z = 5;
    float f = 4.3;
    printf("%i\n", sizeof(c));
    printf("%i\n", sizeof(x));
    printf("%i\n", sizeof(y));
    printf("%i\n", sizeof(z));
    printf("%i\n", sizeof(f));
    return (0);
}
