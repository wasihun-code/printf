#include "holberton.h"
/**
  * _string - printout passed string using _putchar
  * @s: passed string
  * Return: Nothing
  */
void _string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
/**
  * _int - print out the passed number using _putchar
  * @n: passed number to be printed
  * Return: void
  */
void _int(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;

	if (i / 10 != 0)
	{
		_int(i / 10);
	}
	_putchar(i % 10 + '0');
}
