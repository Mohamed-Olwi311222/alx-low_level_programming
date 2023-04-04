#include "main.h"
/**
 * _strchr - search for @c in string @s and get the chars
 * after its apperance
 * @s: string for main to search for @c
 * @c: char that the function will search for it
 * Return: a pointer to the new string
 */
char *_strchr(char *s, char c)
{
	int outer_loop;
	int inner_loop;
	char tmp;
	int length;
	static char new_s[(sizeof(s) / sizeof(s[0])) + 1];
	char *pr_2_New_s = new_s;

	length = strlen(s);
	for (outer_loop = 0; outer_loop < length + 1; outer_loop++)
	{
		if (s[outer_loop] == c)
		{
			for (inner_loop = outer_loop; inner_loop < length; inner_loop++)
			{
				tmp = s[inner_loop];
				new_s[inner_loop - outer_loop] = tmp;
			}
			return (pr_2_New_s);
		}
	}
	return (NULL);
}
