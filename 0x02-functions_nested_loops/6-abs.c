include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */

int _abs(int n)
{
int n;
if (n >= 0)
	printf("%d", n);
else
{
	n = -n;
	printf("%d", n);
}
	return (n);




}
