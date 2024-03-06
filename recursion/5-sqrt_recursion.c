#include "main.h"
/**
 * helper - squares the int x to aproach the sqrt
 * @x: number being multiplied
 * @sqrt: number to be squarerooted
 * Return: int
 */
int helper(int x, int sqrt)
{
	if ((x * x) == sqrt)
		return (x);
	if ((x * x) > sqrt)
		return (-1);
	return (helper(x + 1, sqrt));
}

/**
 * _sqrt_recursion - finds the square root of the given int
 * @n: the given int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
