#include "main.h"

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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
