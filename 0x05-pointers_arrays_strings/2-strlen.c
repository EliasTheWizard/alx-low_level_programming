#include "main.h"

/**
 * _strlen - Checks the length of a string
 *
 * @s: variable to take string input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
	{
		++counter;
	}

	return (counter);
}
