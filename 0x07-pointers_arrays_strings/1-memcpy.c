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
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
