#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)" , sizof(char));
	 printf("Size of an int: %d byte(s)" , sizof(int));
	  printf("Size of a long: %d byte(s)" , sizof(long int));
	   printf("Size of a long long int: %d byte(s)" , sizof(long long int));
	    printf("Size of a float: %d byte(s)" , sizof(float));

return (0);
}
