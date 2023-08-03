#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: parameter
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurse to find natural square root
 * @n: number to claculate the square
 * @i: iterator
 * Return: square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
