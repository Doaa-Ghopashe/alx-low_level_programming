#include <stdio.h>
#include "main.h"

/**
  * _isupper - Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 for uppercase character or 0 for anything else
  */
int _isupper(int c)
{
int i;
for (i = 65; i <= 90; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}
