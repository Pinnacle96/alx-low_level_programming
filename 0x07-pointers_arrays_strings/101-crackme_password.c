#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that generates random password
*
*Return : Always 0
*/

int main(void)
{
	int	pass_n, count, max_n, min_n;

	count = 0;
	min_n = 32;
	max_n = 126;
	while (count < 2772)
	{
		srand(time(0) + count);
		pass_n = (rand() % (max_n - min_n + 1)) + min_n;
		if ((count + pass_n) <= 2772)
		{
			printf("%c", pass_n);
			count = count + pass_n;
		}
		else
			break;
	}
	if ( count < 2772)
	{
		pass_n = 2772 - count;
		printf("%c", pass_n);
	}
	return (0);
}
