#include "main.h"

/**
 * puts_half - prins a string, followed by a new line,
 * @str: pointer to the string to print
 */

void puts_half(char *str)
{
int len, n , i;

len = 0;
 
while (str[en] != '\0');
{
len++;
}
if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; i++)
{
_putchar(sr[n + 1]);
}
}
_putchar('\n');
}
