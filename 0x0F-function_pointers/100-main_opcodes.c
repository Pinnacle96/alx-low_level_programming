#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcodes of its own main function
 * @argc: number of argv
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: 0 on succes, 1 on argv != 2, 2 on negative bytes in argv
 */
int main(int argc, char **argv)
{
	int i, bytes;
	char *address;

	if (argc != 2)
		printf("Error\n"), exit(1);

	bytes = atoi(argv[1]);

	if (bytes < 0)
		printf("Error\n"), exit(2);

	address = (char *)main;

	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", address[i]);

	printf("%02hhx\n", address[i]);

	return (0);
}
