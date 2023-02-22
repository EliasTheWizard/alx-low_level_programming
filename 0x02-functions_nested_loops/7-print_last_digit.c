#include "main.h"

/**
 * print_last_digit - print out the last digit of a number.
 *
 * @num: variable to hold number
 *
 * Return: The last digit of the number input
*/

int print_last_digit(int num)
{
	int lastDigit;

	if (num < 0)
		lastDigit = -1 * (num % 10);
	else
		lastDigit = num % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
