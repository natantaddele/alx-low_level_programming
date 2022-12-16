#include "main.h"

/**
* _ispper - check if a letter is upper
* @c: The number to be checked
* Return: 1 for upper letter or 0 for any else
*/
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= '2', uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
