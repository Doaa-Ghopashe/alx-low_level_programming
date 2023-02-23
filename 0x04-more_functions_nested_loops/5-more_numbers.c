#include <stdio.h>
#include "main.h"

/**
  * more_numbers - Prints 10x the numbers [0-14]
  *
  * Return: void
  */
void more_numbers(void)
{
int i, j, temp;
for (i = 0; i < 10; i++)
{
for (j = 48; j <= 62; j++)
{
temp = j;
if (temp > 57)
{
_putchar(49);
temp = j - 10;
}
_putchar(temp);
}
_putchar('\n');
}
}
