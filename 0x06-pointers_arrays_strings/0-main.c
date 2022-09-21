#include "main.h"

#include <stdio.h>



/**

   * main - check the code

    *

     * Return: Always 0.

      */

int main(void)

{

	    char s1[98] = "Hello ";

	        char s2[] = "World!\n";

		    char *ptr;



		        printf("%s\n l", s1);

			    printf("%s lo", s2);

			        ptr = _strcat(s1, s2);

				    printf("%s lol", s1);

				        printf("%s loll", s2);

					    printf("%s lolly", ptr);

					        return (0);

}
