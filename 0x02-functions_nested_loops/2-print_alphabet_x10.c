#include <stdio.h>
#include "main.h"

/**
* function to print the alphapet letters  times
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int i,c;
for(i=0;i<10;i++){
for(c=97; c<=122 ; c++){
putchar(c);
}
printf("\n");
}
}
