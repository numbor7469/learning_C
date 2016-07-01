/*
 * =====================================================================================
 *
 *       Filename:  my_getchar.c
 *
 *    Description:  this is an example  of wrong use of getchar
 *
 *        Version:  1.0
 *        Created:  06/18/2016 09:51:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


int main() {
	char c;

	printf("size of char is: %lu\n", sizeof(char));
	printf("size of int is : %lu\n", sizeof(int));
	while ((c = getchar()) != EOF)
		putchar(c);
}
