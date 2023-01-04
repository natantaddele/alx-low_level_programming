#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - Print prime number.
 * @s: Input Variable.
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
int length = strlen(s);
for (int i = 0; i < length / 2; i++)
{
if (s[i] != s[length - i - 1])
{
return 0;
}
}
return 1;
}
