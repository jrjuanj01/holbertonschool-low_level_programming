#include "main.h"
/**
 * helper - veryfies if given mumber is prime
 * @x: number to be compared to
 * @n: int from is_prim_number
 * Return: 1 or 0
 */
int helper(int x, int n)
{
	if (n % x == 0 || n < 2)
		return (0);
	if (x == n - 1)
		return (1);
	if (n > x)
		return (helper(x +1, n));
	return (1);
}

/**
 * is_prime_number - verifies if n is a prime number
 * @n: number being verified
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (helper(2, n));
}
