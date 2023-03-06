#include "main.h"

/**
 * *_memcpy -Copies Memory Area
 *
 * @*dest: Pointer to Variable dest
 * @*src: pointer to Variable src
 * @n: Unsigned int variable to store bytes of @src
 * 
 * Return: Pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int map;

	for (map = 0; map < n; map++)
		dest[map] = src[map];

	return (dest);
}
