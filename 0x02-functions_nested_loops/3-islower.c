#include <stdio.h>
#include "main.h"

/**
* islower.Check if the character is in lowercase
*
* Return: int
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
