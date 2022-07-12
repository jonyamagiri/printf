#include "main.h"

/**
* check_func - check and give back the correct function
* @s: an array of functions to be checked
* Return: a function
*/

int (*check_func(char s))(va_list)
{
	f_ops checks[] = {
	{"c", print_c},
	{"s", print_s},
	{"d", print_d},
	{"i", print_i},
	{"b", print_b},
	{NULL, NULL}
	};

	int i = 0;

	while (checks[i].ch != NULL)
	{
		if (*checks[i].ch == s)
		{
			return (checks[i].func);
		}
		i++;
	}
	return (NULL);
}
