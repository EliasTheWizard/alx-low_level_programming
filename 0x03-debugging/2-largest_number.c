#include "main.h"

/**
 * largest_number - checks for the largest number on a list
 *
 * @a: first integer
 * @b: 2nd integer
 * @c: 3rd integer
 *
 * Return: the largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;
	
	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
