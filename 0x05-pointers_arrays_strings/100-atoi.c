#include "main.h"
/**
 * function that convert a string to an integer.
 * @i: integer to be converted
 * @d: integer to be converted
 * @n: integer to be converted
 * @len: integer to be converted
 * @f: integer to be converted
 * @digit: integer to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '_')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '9';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')

				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
}
