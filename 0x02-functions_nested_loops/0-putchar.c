#include <stdio.h>
/**
 * main - printing _putchar
 * Descreption: print aa 
 * Return: (success) 0
 */
int main(void)
{

char str[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ch++)
_putchar(str[ch]);
_putchar('\n');
	return 0;

}
