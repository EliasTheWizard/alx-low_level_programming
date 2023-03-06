#include "main.h"

/**
 * *_memset - Fill in Memory location with a byte
 *
 * @s: pointer to char type variable
 * @b: variable to hold char value
 * @n: number of bytes
 *
 * Return: @s pointer to filled memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
