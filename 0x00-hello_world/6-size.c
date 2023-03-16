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
    printf("Size of a char: %i byte(s)\n", sizeof(c));
    printf("Size of an int: %i byte(s)\n", sizeof(x));
    printf("Size of a long: %i byte(s)\n", sizeof(y));
    printf("Size of a long long int: %i byte(s)\n", sizeof(z));
    printf("Size of a float :%i byte(s)\n", sizeof(f));
    return (0);
}
