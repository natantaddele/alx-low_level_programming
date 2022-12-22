#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the x
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char str1[100] = "Geeks", str2[100] = "World";
{
char str3[100];

int i = 0, j = 0;

while (str1[i] != '\0')
{
str3[j] = str1[i];
i++;
j++;
}
while (str2[i] != '\0')
{
str3[j] = str2[i];
i++;
j++;
}
str3[j] = '\0';
_putchar("\nConcatenated string: %s", str3);
return (0);
}
