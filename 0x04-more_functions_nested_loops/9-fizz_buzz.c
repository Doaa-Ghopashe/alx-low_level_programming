#include <stdio.h>
#include "main.h"

/**
 * Fizz_Buzz : this function to print fizz buzz
 *
 * Return: void
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
