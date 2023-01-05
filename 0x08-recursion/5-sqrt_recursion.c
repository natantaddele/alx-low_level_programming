#include "main.h"

/**
 * _sqrt_recursion - Print sqrt of the number.
 * @n: Input Variable.
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
int candidate;

if (n <= 1)
{
return (n);
}

candidate = _sqrt_recursion(n - 1);

if (candidate > n / candidate)
{
return (candidate - 1);
}
else
{
return (candidate);
}
}
