#include "main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;
	len = _printf("hello world\n%c\n%d\n%s\n", NULL, NULL, NULL);
	len2 = printf("hello world\n%c\n%d\n%s\n", NULL, NULL, NULL);

	_printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
