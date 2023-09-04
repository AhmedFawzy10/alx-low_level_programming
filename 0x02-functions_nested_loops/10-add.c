#include "main.h"
/*
 * File: 10-add.c
 * Auth: Brennan D Baraban
 */
int add(int a, int b)
{
int sum;
sum = a + b;
_putchar(sum / 10 + '0');
_putchar(sum % 10 + '0');
_putchar('\n');
return (sum);
}
