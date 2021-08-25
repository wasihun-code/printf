#include "holberton.h"

/**
 * printchar - outputs characters
 *
 * @list_args - list of arguments
 *
 * Return: int
 */
int printchar(va_list list_args)
{
  _putchar(va_arg(list_args, int));
  return (1);
}
 
