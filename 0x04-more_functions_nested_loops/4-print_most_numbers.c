#include "main"

/**
 * print_most_numbers - print nu except 2 and 4
 * without 2 and 4
 * Return: always 0
 */

void print_most_numbers(void)
{
int a = 0;

while (a < 10)
{
if (a != 2 && a != 4)
_putchar(a);
a++;
}
_putchar('\n');
}
