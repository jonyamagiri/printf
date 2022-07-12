#include "main.h"
#include <stdlib.h>

/**
* print_c - prints characters to standard output
* @inputs: the list of characters to be printed
* Return: the number of characters printed
*/

int print_c(va_list inputs)
{
	_putchar(va_arg(inputs, int));
	return (1);
}

/**
* print_s - prints string to standard output
* @inputs: the list of characters to be printed
* Return: the number of characters printed
*/

int print_s(va_list inputs)
{
	int i = 0, count = 0;
	char *str;

	str = va_arg(inputs, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i])
	{
		count += _putchar(str[i]);
		i++;
	}
	return (count);
}
