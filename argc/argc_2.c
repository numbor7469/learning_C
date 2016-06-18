/*
 * =====================================================================================
 *
 *       Filename:  argc_2.c
 *
 *    Description:  second way of show argv 
 *
 *        Version:  1.0
 *        Created:  06/14/2016 12:52:35
 *       Revision:  non
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


int main(int argc, char *argv[]) {
	while (--argc > 0)
		printf("%s%s", *++argv, (argc > 0) ? " " : "");
	printf("\n");
	return 0;
}
