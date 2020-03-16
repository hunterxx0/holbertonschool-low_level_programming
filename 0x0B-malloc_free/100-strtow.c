#include <stdio.h>
#include <stdlib.h>
/**
* strtow(:)? (- each word)?
*
* @s: input string
* Return: z
*/
char **strtow(char *s)
{
	int i, j, l, x, c = 0, sum = 0;
	char **z;

	for (j = 0; s[j] != '\0'; j++)
		;
	if (j == 0 || s == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			l = i;
			while (s[l] != ' ')
			{
				if (s[l] >= 'a' && s[l] <= 'z')
				{
					sum++;
					l++;
				}
				else
					l++;
			}
			i = l;
		}
		else if (s[i] == ' ' && sum != 0)
		{
			c++;
			sum = 0;
		}
	}
	z = (char **)malloc(sizeof(char *) * c);
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			l = i;
			while (s[l] != ' ')
			{
				if (s[l] >= 'a' && s[l] <= 'z')
				{
					sum++;
					l++;
				}
				else
					l++;
			}
			i = l;
		}
		else if (s[i] == ' ' && sum != 0)
		{
			z[i] = malloc(sizeof(char) * sum + 1);
				if (z[i] == NULL)
				{
					x = 0;
					while (x < i)
					{
						free(z[x]);
						x++;
					}
					return (NULL);
				}
				else
				{
					z[i][sum + 1] = '\0';
					x = i - 1;
					while (sum >= 0)
					{
						if (s[x] >= 'a' && s[x] <= 'z')
						{
							z[i][sum] = s[x];
							sum--;
						}
						x--;
					}
				}
		}
	}
	return (z);
}
