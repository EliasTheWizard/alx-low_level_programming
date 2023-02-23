#include "main.h"

/**
 * _isupper - Check if the character is in Uppercase
 *
 * @ch: variable holds the character
 *
 * Return: 1 if character is in uppercase else 0
 */
int _isupper(int ch)
{
  /* we refer to ASCII code A-Z*/
  if (ch >= 65 && ch <= 90)
  {
    return (1);
  }
  else
  {
    return (0);
  }
