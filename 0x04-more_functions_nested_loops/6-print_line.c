#include <stdio.h>
#include "main.h"

/**
  * print_line - Draws a straight line
  * @n: The number of times the character
  *
  * Return: void
  */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
