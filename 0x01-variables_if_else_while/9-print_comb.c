
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n);
if (n < 9)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
