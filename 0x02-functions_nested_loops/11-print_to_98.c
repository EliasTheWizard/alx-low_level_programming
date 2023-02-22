#include "main.h"

/**
 * print_to_98 - print out numbers from input num to 98
 *
 * @num: Starting number
 *
 * Return: void
 */
 void print_to_98(int num)
 {
    if (num < 98)
    {
        for (num = num; num <= 98; num++)
        {
            printf("%d, ", num);
        }
    }
    else
    {
        for (num = num; num >= 98; num--)
        {
            printf("%d, ", num);
        }
    }
    _putchar('\n');
}
