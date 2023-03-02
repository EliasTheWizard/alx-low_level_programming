#include "main.h"

/**
 * _strcat - Concatenate two strings
 *
 * @dest: pointer variable to keep final result
 * @src: pointer variable to keep the initial string
 *
 * Return: final result @dest
 */
char *_strcat(char *dest, char *src)
{
	int str1, str2;

	str1 = 0;

	while (dest[str1])
		str++;

	for (str2 = 0; src[str2]; str2++)
		dest[str1++] = src[str2];

	return (dest);
}
