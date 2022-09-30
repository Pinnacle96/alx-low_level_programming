#include "main.h"

/**
 *_atoi - extract the number to integer
 *@s: string input
 *Return: number int
 */
int _atoi(char *s)
{
	int	i;
	int	sign;
	unsigned int	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
							s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
			i++;
		if (s[i] == '-')
			sign = -sign;
		if ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
			i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		number = (number * 10) + (s[i] - '0');
		i++;
	}
	return (sign * number);
}
