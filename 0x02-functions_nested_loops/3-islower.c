#include "main.h"

/**
 * _islower - Checks if a character is in lower case or not
 *
 * Return: 1 if character is in lower case else 0
 */
int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)/* 97 and 122 are from the ASCII table representing a-z(lowercase alphabet)*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
