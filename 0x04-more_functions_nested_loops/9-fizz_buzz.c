#include <stdio.h>
#include "main.h"

/**
 * Main : this function to print numbers [0-100]
 *
 * Return: On success 0.
 */
int main(void) {
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
_putchar(70);
_putchar(105);
_putchar(122);
_putchar(122);
_putchar(66);
_putchar(117);
_putchar(122);
_putchar(122);
}
else if (i % 3 == 0)
{
_putchar(70);
_putchar(105);
_putchar(122);
_putchar(122);
}
else if (i % 5 == 0)
{
_putchar(66);
_putchar(117);
_putchar(122);
_putchar(122);
}
else
{
if(i > 10)
{
_putchar(49 + (i / 10 - 1));
_putchar(49 + (i % 10 - 1));
}
else
{
_putchar(49 + (i - 1));
}
}
_putchar(32);
}
return (0);
}
