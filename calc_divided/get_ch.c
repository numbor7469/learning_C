/*
 * =====================================================================================
 *
 *       Filename:  get_ch.c
 *
 *    Description:  get characters form the input array
 *
 *        Version:  1.0
 *        Created:  2016/06/10 17时17分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "stdio.h"

#define BUFSIZE 100


char buf[BUFSIZE];
int bufp;

int get_ch(void) {
	printf("\n num index: ");
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void unget_ch(int c) {
	if (bufp >= BUFSIZE)
		printf("unget_ch: too many charachters\n");
	else
		buf[bufp++] = c;
}
