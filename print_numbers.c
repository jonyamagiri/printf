#include "main.h"


/**
* print_d - prints a decimal number to standard output
* @inputs: the list of integers to be printed
* Return: the number of characters printed
*/

int print_d(va_list inputs)
{
	unsigned int abs, aux, zero, count;
	int nums;
	
	count = 0;

	nums = va_arg(inputs, int);
	if (nums < 0)
	{
		abs = (nums * -1);
		count += _putchar('-');
	}
	
	else
		abs = nums;

	aux = abs;
	zero = 1;
	while (aux > 9)
	{
		aux /= 10;
		zero *= 10;
	}

	while (zero >= 1)
	{
		count += _putchar(((abs / zero) % 10) + '0');
		zero /= 10;
	}

	return (count);
}

/**
* print_i - prints an integer number to standard output
* @inputs: the list of integers to be printed
* Return: the number of characters printed
*/

int print_i(va_list inputs)
{
	return (print_d(inputs));
}
