#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
<<<<<<< HEAD
* _printf - accepts arguments and display the number of
* arguments passed as parameters.
* @format: the characters to be printed
=======
* _printf - prints variable number of arguments
* @format: the first paramter start
* @... : variable number of arguments after @format
>>>>>>> 01acc73df56ad628edf2349f4441363a914bffc6
* Return: number of args
*/

int _printf(const char *format, ...)
{
<<<<<<< HEAD

	va_list args;
	int i = 0, num = 0;
	int n_displayed = 0;
	char *str = NULL;

	va_start(args, format);

=======
	va_list args;
	int i = 0,  n_displayed = 0;
>>>>>>> 01acc73df56ad628edf2349f4441363a914bffc6
	int (*func)(va_list);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			n_displayed++;
			 i++;
		}
		else
		{
			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
				n_displayed += func(args);
<<<<<<< HEAD
				i++

=======
				i++;
			}
>>>>>>> 01acc73df56ad628edf2349f4441363a914bffc6
		}
		i++;
	}
	va_end(args);
	return (n_displayed);
}
