/**
 *  * main - Entry point of the program
 *   *
 *    * Description: This program prints a string to the standard error
 *     * without using printf or puts functions.
 *      *
 *       * Return: Always 1 (indicating an error occurred)
 */

#include <unistd.h>

int main(void)
{
	  char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	    int len = 0;

	      while (str[len] != '\0')
		          len++;

	        write(2, str, len);

		  return (1);
}
