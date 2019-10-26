#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Print String
 * @separator: Separator
 * @n: Number of parameter
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (n == 0)
	return;

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list, char*));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
