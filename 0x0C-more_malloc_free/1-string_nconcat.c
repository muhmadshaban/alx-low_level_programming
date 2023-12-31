#include "main.h"
/**
 ** string_nconcat - Concatenates two strings, with limit on s2
 ** @s1: The first string
 ** @s2: The second string
 ** @n: The maximum number of bytes to concatenate from s2
 ** Return: If concatenation fails - NULL
 ** Otherwise - a pointer to the newly-allocated space in memory
 ** containing the concatenated strings
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *concat_str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	n = len2;

	concat_str = malloc(sizeof(char) * (len1 + n + 1));

	if (concat_str == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	concat_str[i] = s1[i];
	for (j = 0; j < n; j++)
	concat_str[i + j] = s2[j];
	concat_str[i + j] = '\0';

	return (concat_str);
}
