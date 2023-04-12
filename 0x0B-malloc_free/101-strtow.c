#include"main.h"

/**
 * wcount - word count
 * @s: the string
 * Return: word count
 */

int wcount(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}


/**
 * strtow - splits a string into words
 * @str: the string
 * Return: pointer to an array of strings (words) or NULL
 */

char **strtow(char *str)
{
	char **w, *tmp;
	int i = 0, k = 0, len = 0, c = 0, wc = 0, start, end;

	while (str[len])
		len++;
	wc = wcount(str);
	if (wc == 0)
		return (NULL);

	w = (char **) malloc((wc + 1) * sizeof(char *));
	if (w == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc((c + 1) * sizeof(char));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				w[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	w[k] = NULL;

	return (w);
}
