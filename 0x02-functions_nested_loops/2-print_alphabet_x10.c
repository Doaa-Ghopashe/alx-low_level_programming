#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Make alphabet x10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
int i, c;
for (i = 0; i < 10; i++)
{
for (c = 97; c <= 122; c++)

putchar(c);

printf("\n");
}
}
