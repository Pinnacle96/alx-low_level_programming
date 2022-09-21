#include "main.h"

/**
 * print_number - prints a integer with putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	int tmp;
	int factor;

	tmp = n;
	factor = 1;
	while (tmp / 10)
	{
		tmp = tmp / 10;
		factor *= 10;
	}
	while (factor > 0)
	{
		tmp = n / factor;
		n = n - (tmp * factor);
		if (tmp < 0)
		{
			_putchar('-');
			tmp = -tmp;
			n = -n;
		}
		_putchar(tmp + '0');
		factor /= 10;
	}
}
