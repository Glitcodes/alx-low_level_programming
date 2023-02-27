#include "main.h"

/**
 *  * rev_string - reverses a string
 *   * @s: string to reverse
 *    *
 *     * Return: void
 *      */
void rev_string(char *s)
{
	    int len = strlen(s);
	        int i, j;
		    char temp;

		        for (i = 0, j = len - 1; i < j; i++, j--)
				    {
					            temp = s[i];
						            s[i] = s[j];
							            s[j] = temp;
								        }
}

