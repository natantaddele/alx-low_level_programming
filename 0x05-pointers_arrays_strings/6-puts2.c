#include "main.h"

/**
 * [its2 - [romts a stromg, foolowed by a new line,
 * @str: pinter to the string to print
 * Return: void
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\n')
{
if (i % 2 ==0)
{
_putchar(srt[i]);
}

i++;
}
_puchar('\n');
}
