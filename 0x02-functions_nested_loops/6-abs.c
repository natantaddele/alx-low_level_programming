#include "main.h"

/**
 * _abs - value absolute.
 * @n:The int to print
 * Return: Always 1.
 */
int abs(int n)
{

if (n < 0)
{
return (n * (-1));
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
