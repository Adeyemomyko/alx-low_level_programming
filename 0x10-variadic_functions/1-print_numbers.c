#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...){

	va_list numb;
	unsigned int a;

		va_start(numb, a);

		for(a=0, a < n,a++)
		{
			printf("%d", va_args(numb,int));
		
			if (a != (n - 1) && separator != NULL)
			printf("%s", separator);

		printf("/n");
		}

		va_end(numb);

}

