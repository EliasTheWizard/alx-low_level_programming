#include<stdio.h>
#include<unistd.h>

int _putchar(char c);
void print_alphabet(void)
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - Print out alphabet in lowercase
 *
 * Return: 0 Success
 *
 */
void print_alphabet()
{
        char alpha;

        alpha = 'a';

        while(alpha <= 'z')
        {
               _putchar(alpha);

                alpha++;
        }
}
