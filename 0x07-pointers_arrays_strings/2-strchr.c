#include "main.h"

/**
 * _strchr - Locates a character in a sring.
 * @s: The string o be searched.
 * @c: The character to be located.
 *
 * Return: if c is found - a pinter to the first occurence.
 * if c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
int index;

for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return('\0');
}
