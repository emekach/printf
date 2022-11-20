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

	/*Prevent parsing a null pointer*/
	if (format == NULL)
		return (-1);

	/*Print each character of string*/
	while (format[i])
	{
		value = write(1,&format[i],1);
		count = count + value;
		i++;
	}

	return (count);
}
