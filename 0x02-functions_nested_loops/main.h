#include<stdio.h>
#include<unistd.h>

/**
 * alpha_low - output characters
 *
 * Return: 0 (Success)
 */
void alpha_low(char x)
{
	write(STDOUT_FILENO, &x, 1);
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
                alpha_low(alpha);

                alpha++;
        }
}
