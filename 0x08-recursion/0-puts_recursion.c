#include "main.h"
/**
 * _puts_recusion - function like puts ();
 * @s: input
 * Return: 0 (on track)
 * */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	
	else
		_putchar('\n');
}
