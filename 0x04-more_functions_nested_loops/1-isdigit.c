#include <stdio.h>
#include "main.h"

/**
  * _isdigit - Checks fora digit [0-9]
  * @c: The character to be checked
  *
  * Return: 1 for a digit character or 0 for anything else
  */
int _isdigit(int c)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}
