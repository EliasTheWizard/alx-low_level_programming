#include "main.h"

/**
 * _islower - Checks if a character is in lower case or not
 *
 * @ch: variable to hold ASCII code of input character
 *
 * Return: 1 if ch is in lower case else 0
 */
int _islower(int ch)
{
	/**
	 * 97 and 122 are ASCII for lowercase characters
	 */
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
