#include <stdio.h>

/**
 * _sqrt_recursion - Print sqrt of the number.
 * @n: Input Variable.
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)

{
if (n < 0)

{
return (-1);
}
if (n == 0 || n == 1)

{
return (n);
}
int start;
int end;
int ans;

while (start <= end)
{
int mid = (start + end) / 2;
if (mid * mid == n)
{
return (mid);
}
if (mid * mid < n)
{
start = mid + 1;
ans = mid;
}
else
{
end = mid - 1;
}
}
return (ans);
}
