#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: the string to count
 * Return: lenght of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}
