#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int  _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - Prints alphabet in lower case
 *
 * Return: the alphabet
 */
 
void print_alphabet()
{
	char alphabet;

  alphabet = 'a';
  while (alphabet <= 'z') {
    _putchar(alphabet);
    alphabet++;
  }
}
