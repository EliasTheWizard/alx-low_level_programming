#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the name of the file it was
 *              compiled from, followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
  /*__FILE__ is a Macro that keeps the name*/
	printf("%s\n", __FILE__);
	return (0);
}
