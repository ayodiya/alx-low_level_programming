#include <stdlib.h>

/**
 * _strdup - Return pointer to a new string that duplicates given string,
 * allocate mem w/ malloc
 * @str: String to duplicate
 *
 * Return: Pointer to new string, NULL if failed to make memory
 */
char *_strdup(char *str)
{
	char *newStr;
	unsigned int i, len;

	len = sizeof(str);
	newStr = malloc(len * sizeof(*str));

	if (str == NULL || newStr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		newStr[i] = str[i];
	}

	return (newStr);
}
