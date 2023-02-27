#include "main.h"

/**
 * _strcpy - Copies string values
 *
 * @src: source variable
 * @dest: destination variable
 *
 * Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int start, finish = 0;

	for (start = 0; src[start] != '\0'; ++start)
	{
		dest[finish] = src[start];
		++finish;
	}
	dest[finish] = '\0';

	return (dest);
}
