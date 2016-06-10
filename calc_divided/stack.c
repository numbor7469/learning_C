/*
 * =====================================================================================
 *
 *       Filename:  stack.c
 *
 *    Description:  where we load our data and function with it
 *
 *        Version:  1.0
 *        Created:  2016/06/10 17时14分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "calc.h"

#define MAXVAL 100


int sp = 0;
double val[MAXVAL];

void push(double f) {
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void) {
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

void head(void) {
	if (sp > 0)
		printf("this is the head: %g\n", val[sp - 1]);
	else
		printf("error: stack empty\n");
}

double copy(void) {
	if (sp > 0)
		return val[sp];
	else
		printf("error: stack empty\n");
	return EOF;
}

void my_delete(void) {
	sp = 0;
}
