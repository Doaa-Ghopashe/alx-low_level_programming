#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char word;
int num;
long int lnum;
long long int llnum;
float fnum;
printf("Size of a char: %ld byte(s)\n", sizeof(word));
printf("Size of an int: %ld byte(s)\n", sizeof(num));
printf("Size of a long int: %ld byte(s)\n", sizeof(lnum));
printf("Size of a long long int: %ld byte(s)\n", sizeof(llnum));
printf("Size of a float: %ld byte(s)\n", sizeof(fnum));
return (0);
}
