#include "main.h"

/**
 * _memcpy - copies memory.
 * @dest: dest
 * @src: string to copy
 * @n: numbers of bytes to copy
 * Return: char dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
