#include <stdio.h>

/**
 * rev_string - reverse the string and print it
 *
 * @s: variable to store characters
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

    while (s[i])
        i++;

    for (j = 0 , i = i - 1 ; j < i ; j++, i--)
    {
    	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
    }
}
