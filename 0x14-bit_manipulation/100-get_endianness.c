#include "main.h"

/**
 * get_endianness - big endian: bytes in natural order ; or (motorola)
 * little endian where is more intuitive to access to the data (intel)
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1, endian;
	char *c = (char *)&n;

	if (*c)
		endian = 1; /*little endian*/
	else
		endian = 0; /*big endian*/
	return (endian);
}
