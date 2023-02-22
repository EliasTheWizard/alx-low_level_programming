#include "main.h"

/**
 * _abs - Calculates and returns the absolute value of input
 *
 * @num: variable to hold input
 *
 * Return: absolute value of num
*/
int _abs(int num)
{
	if (num < 0)
	{
		num *= -1;
	}
	return (num);
}
