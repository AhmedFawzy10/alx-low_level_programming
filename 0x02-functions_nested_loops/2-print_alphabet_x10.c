#include "main.h"
/**
	 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
	 * followed by a new line
	 */
void print_alphabet_x10(void)
{
int i = 0;
char ch;
while(i<10){
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
i++;
}

}
