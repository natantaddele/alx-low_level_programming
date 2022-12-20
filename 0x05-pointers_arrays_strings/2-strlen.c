#include "main.h"

/**
 * _strlen - Function that returns the length
 *
 * @s: this is thte input
 * Return: Length of the string 
 */
int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;

return (i);
}

