#include <stdio.h>
#include "main.h"

/**
  * _print_numbers - Prints numbers [0-9]
  *
  * Return: void
  */
void print_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
_putchar(i);
}
_putchar(36);
_putchar('\n');
}
