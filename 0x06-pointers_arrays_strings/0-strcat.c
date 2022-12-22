#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src, including the x
 * null byte, to the end of the string pointed to by @dest.
 * @str1: A pointer to the string to be concatenated upon.
 * @str2: The source string to be appended to @str1.
 *
 * Return: A pointer to the destination string @str1.
 */


char *_strcat(char *str1, const char *str2)
{

char str3;

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
_putchar("\nConcatenated string: %d", str3);

return (0);
}
