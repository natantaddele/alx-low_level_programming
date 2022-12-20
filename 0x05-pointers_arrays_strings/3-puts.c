#include "main.h"
/**
 * _puts - write function that prints a string
 * @str:this is my input string 
 */
void _puts(char *str)
{
int i;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
