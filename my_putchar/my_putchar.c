/*
 * =====================================================================================
 *
 *       Filename:  my_putchar.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/02/2016 11:07:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>


int main() 
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(tolower(c));
	return 0;
}
