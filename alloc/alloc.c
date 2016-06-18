/*
 * =====================================================================================
 *
 *       Filename:  alloc.c
 *
 *    Description:  alloc and afree to control the buffer
 *
 *        Version:  1.0
 *        Created:  2016/06/12 18时17分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>


#define ALLOCSIZE 10000

char allocbuf[ALLOCSIZE];
char *allocp = allocbuf;

char *alloc(int n) {
	if ((allocbuf + ALLOCSIZE - allocp) >= n) {
		allocp += n;
		return allocp - n;
	}
	else
		return NULL;
}

void afree(char *p) {
	if (p >= allocbuf && p < (allocbuf + ALLOCSIZE))
		allocp = p;
}
