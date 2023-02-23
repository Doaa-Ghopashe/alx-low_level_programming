#include <stdio.h>
#include "main.h"

/**
 *issuper: this function to check if the c is in uppercase or, otherwise
 *@c: this variable is the ASCII code for some variable
 *
 * Return: Always 0.
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
