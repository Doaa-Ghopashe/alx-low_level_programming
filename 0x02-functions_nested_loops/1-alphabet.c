#include <stdio.h>
#include "main.h"

/**
* print_alphabet - Make the alphabet
*
* Return: void
*/
void print_alphabet(void)
{
int c;
for (c = 97; c <= 122; c++)
{
putchar(c);
}
printf("\n");
}
