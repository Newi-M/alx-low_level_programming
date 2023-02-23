#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int index = 0;
  int j = 0;
  
  char *str, temp;
  int i;

	while (index >= 0)
	{
		if (s[index] == '\0')
			break;
		index++;
	}
	str = s;

	for (i = 0; i < (index - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
