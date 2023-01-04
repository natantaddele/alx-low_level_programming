#include <stdio.h>

/**
 * wildcmp - Print prime number.
 * @s1: Input Variable.
 * @s2: second variable.
 *
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s2 == '*')
{
while (*s2 == '*')
{
s2++;
}
if (*s2 == '\0')
{
return 1;
}
while (*s1)
{
if (wildcmp(s1, s2))
{
return 1;
}
s1++;
}
return 0;
}
else if (*s1 != *s2)
{
return 0;
}
s1++;
s2++;
}
return *s1 == *s2;
}
