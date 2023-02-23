#include <stdio.h>
#include "main.h"

/**
  * print_diagonal - Prints \ multiple times
  * @n: The number of times the \ should be printed
  *
  * Return: void
  */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i  < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
