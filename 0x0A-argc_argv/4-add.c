
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("0\n");
return 0;
}

for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return 1;
}
}
result += atoi(argv[i]);
}

printf("%d\n", result);

return 0;
}
