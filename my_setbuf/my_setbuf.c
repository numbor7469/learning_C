/*
 * =====================================================================================
 *
 *       Filename:  my_setbuf.c
 *
 *    Description:  a simple example for setbuf
 *
 *        Version:  1.0
 *        Created:  06/18/2016 11:12:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 
 * =====================================================================================
 */
#include <stdio.h>

#define BUFSIZE 100
char buf[BUFSIZE];

int main() {
	int c;

	setbuf(stdout, buf);
	for (int i = 0; i < 4; ++i) {
		c = getchar();
		putchar(c);
	}
	//fflush(stdout);

	return 0;
}
