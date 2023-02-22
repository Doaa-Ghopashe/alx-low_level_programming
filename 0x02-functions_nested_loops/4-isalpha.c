#include <stdio.h>
#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
*/
int _isalpha(int c)
{
int i;
for (i = 65; i <= 122; i++)
{
if (i == 91)
{
i = 97;
}
if (c == i)
{
return (1);
}
}
return (0);
}
