#include <stdio.h>

/**
 * function - factorial Print given No. of factorial.
 *
 *
 * @n: Input Variable.
 *
 * Return: Always 0.
 */
int factorial(int n)

{
if (n < 0)

{
return (-1);
}
if (n == 0)

{
return (1);
}
return (n * factorial(n - 1));
}
