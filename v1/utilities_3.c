#include "main.h"
/**
 * _strcpy - mimics standard string cpy
 * @dest: destination pointer
 * @src: src pointer
 * Return: copy of src in dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
dest[i] = '\0';
return (dest);
}
/**
 * _strcat - mimics standard string cat
 * @dest: destination pointer
 * @src: source pointer
 * Return: destination pointer
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
/**
 * _strchr - searches for character in striing
 * @s: string to search character `c`
 * @c: character to be searched for
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			break;
		}
	} while (*s++);
	return (s);
}
/**
 * _strncmp - mimics the standard string comparision
 * @s1: string 1
 * @s2: string 2
 * @n: size of strings
 * Return: 0 if same, 1 if not same
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 == NULL)
		return (-1);
	for (i = 0; i < n && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * _strdup -mimics the standard duplicate string
 * @str: pointer to string
 * Return: pointer to str
 */
char *_strdup(char *str)
{
	size_t len, i;
	char *str2;

	len = _strlen(str);
	str2 = malloc(sizeof(char) * (len + 1));
	if (!str2)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
