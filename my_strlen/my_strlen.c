/*
 * =====================================================================================
 *
 *       Filename:  my_strlen.c
 *
 *    Description:  name of array is the position of first element
 *
 *        Version:  1.0
 *        Created:  2016/06/12 17时40分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int my_strlen(char *s) {
	int n;

	for (n = 0; *s != '\0'; ++s)
		++n;
	return n;
}


int main() {
	char *s;
	s = "this is a long string";
	printf("number of \"this is a long strint\": %d\n", my_strlen(s));
	printf("number of \"hello world\": %d\n", my_strlen("hello world"));
}
