#include "main.h"

/**
 * _puts - writea unction that prints a string
 * @str: this is my input string 
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
