/*
 * =====================================================================================
 *
 *       Filename:  get_int.c
 *
 *    Description:  get int from putin string
 *
 *        Version:  1.0
 *        Created:  2016/06/12 15时34分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <ctype.h>
#include <stdio.h>

#define SIZE 100


extern int get_ch(void);
extern void unget_ch(int);

int get_int(int *pn) {
	int c, sign;

	while (isspace(c = get_ch()))
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		while(!isdigit(c = get_ch()));
			;
	for (*pn = 0; isdigit(c); c = get_ch())
		*pn = 10 * (*pn) + (c - '0');
	*pn *= sign;
	if (c != EOF)
		unget_ch(c);
	return c;
}


int main() {
	int n, array[SIZE], get_int(int *);
	for (n = 0; n < SIZE && get_int(&array[n]) != EOF; n++)
		printf("this is array[%d]: %d\n", n, array[n]);
	return 0;
}
