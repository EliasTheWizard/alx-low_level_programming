#include "main.h"

/**
 * _isalpha - Checks if a character is in lower case or not
 *
 * @ch: variable to hold ASCII code of input character
 *
 * Return: 1 if ch is alphabet character else 0
 */
int _isalpha(int ch)
{
	/**
	 * 97-122 or 65-90 are ASCII for Alphabet
	 */
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	else if (ch >= 65 && ch <= 90)
	{
		return (1);
	}
  else
  {
    return (0);
  }
}
