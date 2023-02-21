#include <stdio.h>
#include "_putchar.c"
/**
 * print_alphabet Protoype
 */
void print_alphabet(void);

/**
 * print_char - Prints out string of characters
 *
 * Return: Always 0 takes in no argument
 */

void print_char()
{
	puts("_putchar");
}

/**
 * print_alphabet - Prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet()
{
	char alphabet;

  alphabet = 'a';
  while (alphabet <= 'z') {
    _putchar(letter);
    alphabet++;
  }
}
