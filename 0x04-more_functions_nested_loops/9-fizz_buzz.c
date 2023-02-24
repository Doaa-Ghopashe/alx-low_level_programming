#include <stdio.h>
#include "main.h"

/**
 * Main : this function to print numbers [0-100]
 *
 * Return: On success 0.
 */
void Fizz_Buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
printf(" ");
}
printf("\n");
}
int main(void){
Fizz_Buzz();
return (0);
}
