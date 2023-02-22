#include <stdio.h>
#include "main.h"

/**
* _islower - Checks for lowercase character
* @c: The character to be checked
*
* Return: 1 for lowercase character or 0 for anything else
*/
int _islower(int c)
{
int i;
for (i = 97; i <= 122; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
