#include "holberton.h"
/**
  * _print_octal - change to octal
  * @args: va_list
  * Return: int len
  */
int _print_octal(va_list args)
{
	int base = 8, len;
	unsigned int change = 0, i = 0;
	int qu, num, remi = 0;
	char st[50];
	char *str;

	num = va_arg(args, int);
	qu = num;
	str = malloc(sizeof(st));

	while (qu != 0)
	{
		remi = qu % base;
		qu /= base;
		change = (remi  * _pow_recursion(10, i)) + change;
		i++;
	}
	len = num_len(change);
	str = tostring(st, change, len);
	printstr(str);

	return (len);
}
