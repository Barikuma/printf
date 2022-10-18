#include "main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;

	len = _printf("%i\n", NULL);
	len2 = printf("%i\n", NULL);

	_printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
