#include "main.h"

/**
 * _strcpy - copies the content variable
 * @dest: this is destiny
 * @src: this is the copies
 * Return: This is the copies
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
