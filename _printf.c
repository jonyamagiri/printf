#include "main.h"
/**
* _printf - function to print to standard output
* @format: parameters whose type is to be checked and printed
* Return: count of parameters printed
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, num = 0;
	va_list inputs;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(inputs, format);
	for (i = 0; format[i]; i++)
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			num++;
			i++;
		}
		if (!format[i])
		{
			return (num);
		}
		func = check_func(format[i + 1]);
		if (func != NULL)
		{
			num += func(inputs);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);

		_putchar(format[i]);
		num++;
		if (format[i + 1] == '%')
			i += 2;
	}
	va_end(inputs);
	return (num);
}
