#include "main.h"

/**
 * _atoi - Turn strings/characters to whole numbers
 *
 * @str: variable to take string
 *
 * Return: converted integer from string
*/

int _atoi(char *str)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
			num = (num * 10) + (*str - '0');
		else if (num > 0)
			break;
	} while (*str++);

	return (num * sign);
}
