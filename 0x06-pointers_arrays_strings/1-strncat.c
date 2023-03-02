#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @bts: most number of bytes from source input
 *
 * Return: (dest) destination input 
*/

char *_strncat(char *dest, char *src, int bts)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < bts && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
