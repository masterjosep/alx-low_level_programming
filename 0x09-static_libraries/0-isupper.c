#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for upper character or 0 for anything esle
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
