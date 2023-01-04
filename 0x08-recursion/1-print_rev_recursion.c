#include <stdio.h>

/**
 * _rev_recursion - Print string revers.
 * 
 * @s: Input Variable.
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)

{
if (*s == '\0')

{
	
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
