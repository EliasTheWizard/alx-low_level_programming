#include <stdio.h>

/**
 * main - Entry point. Print numbers
 *
 * Return: 0 success
 */
int main(void)
{
  int numbers;
  
  for (numbers = 0; numbers <= 9; numbers++)
  {
    puts("%d",numbers);
  }
  
  return (0);
}
