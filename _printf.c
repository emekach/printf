#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints a string in a formatted way
 * @format: string to print
 * @...: variadic parameters
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;

	while (format[i])
	{
		count = write(1,&format[i],1);
		count = count + value;
		i++;
	}

	return (count);
}
