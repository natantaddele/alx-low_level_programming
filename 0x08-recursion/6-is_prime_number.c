#include <stdio.h>

/**
 * is_prime_number - Print prime number.
 * @n: Input Variable.
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
int i;

if (n <= 1)
{
return 0;
}
i = 2;
while (i < n)
{
if (n % i == 0)
{
return 0;
}
i++;
}
return 1;
}
