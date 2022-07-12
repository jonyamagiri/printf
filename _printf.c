#include "main.h"
/**
* _printf - function to print to standard output
* @format: parameters whose type is to be checked and printed
* Return: count of parameters printed
*/
int _printf(const char *format, ...)
{
	int num = 0;

	if (format != NULL)
	{
		int i;
		va_list inputs;
		int (*f)(va_list);

		va_start(inputs, format);
		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		num = 0;

		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					num += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					f = check_func(format[i + 1]);
					num += (f ? f(inputs) :  _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				num += _putchar(format[i]);
			i++;
		}
		va_end(inputs);
	}

		return (num);
}
