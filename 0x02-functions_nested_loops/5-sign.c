#include "main.h"

/**
 * print_sign - print out the sign of a number/input
 *
 * @num: variable to hold the number to undergo check.
 *
 * Return: 1 if num > 0, 0 if num == 0 and -1 if num < 0
*/

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar(43 + 0);
    
    return (1);
	}
	else if (num == 0)
	{
		_putchar(0 + 48);
		
    return (0);
	}
	else
	{
		_putchar(45 + 0);
		
    return (-1);
	}
}
