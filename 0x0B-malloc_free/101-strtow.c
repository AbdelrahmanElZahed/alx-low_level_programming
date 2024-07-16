#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, w;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < word_count; i++)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		w = 0;
		while (str[w] && str[w] != ' ' && str[w] != '\t' && str[w] != '\n')
			w++;
		words[i] = malloc((w + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < w; j++)
			words[i][j] = *str++;
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}
