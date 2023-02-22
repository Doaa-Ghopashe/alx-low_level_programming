#include <stdio.h>
#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */
void jack_bauer(void)
{
	int secs, mins = 0;
	for (mins = 0; mins <= 23; mins++)
	{
	for (secs = 0; secs < 60; secs++)
	{
		if (mins < 10)
		{
			if (secs < 10)
			{
				printf("0%d:0%d \n", mins, secs);
			}
			else
			{
				printf("0%d:%d \n", mins, secs);
			}
		}
		else
		{
			if (secs < 10)
                        {
                                printf("%d:0%d \n", mins, secs);
                        }
                        else
                        {
                                printf("%d:%d \n", mins, secs);
                        }
		}
	}
	}
}
