/* Program Name: Largestnum.c
 * Author: Ashlyn Hanks
 * Class: CSC-2410
 * Date: 1-14-2021
 * Location: ~/student/ahanks/CSC2410/Lab1
 * This program will find the largest number from 2-10 real number arguments. Error messages will be provided if the numbers entered are less than 2 or more than 10
* To compile: use GCC
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
// This will check to make sure there are between 2 and 10 arguments passed to compare 
    if (argc < 3)
	{
	    fprintf(stderr, "Not enough arguments passed, please provide more");
	}
    else if (argc > 11)
	{
	    fprintf(stderr, "Too many arguments passed, please pass less next time");
	}
// Once passed the check, the program will then do the comparison using atof to convert

    else
	{
	    double val[11];
	    int a;
	    int b;
	
	
	    for (a = 1; a < argc; a++)
		{
		    val[b] = atof(argv[a]);
		    b++;
		}

	    for (a = 0; a < argc; a++)
	    	{
		    if (val[0] < val[a+1])
			val[0] = val[a+1];
		}


		printf("\n");
		printf("The largest of %d real numbers: %.2f\n", argc-1, val[0]);
		printf("\n");
	}

    return 0;
}

