#include "main.h"

/**
 * _print_rev_recursion - reverses a string
 * @s: input
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		void _print_rev_recursion(s - 1);
		_putchar (*s);
	}
