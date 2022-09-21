#include "main.h"

/**
 * print_number - prints a integer with putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
if (n < 0) {
        putchar('-');
        n = -n;
    }

    // Remove the last digit and recur
    if (n/10)
        print(n/10);

    // Print the last digit
    putchar(n%10 + '0');
}
