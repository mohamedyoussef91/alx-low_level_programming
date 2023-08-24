#include "main.h"

/**
 * _strncpy - a function that copies a string*
 * @dest: pointer to destination input buffer
 * @scr: pointer to source input buffer
 * @n: byets of @src
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * interate through src array
	 * where if there is no null byte
	 * among the firt n byets of source
	 * the string placed in the dest will
	 * not be null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional nullbyets to dest to ensure
	 * that a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
