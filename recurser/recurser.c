/*
 * =====================================================================================
 *
 *       Filename:  recurser.c
 *
 *    Description:  print a number character by character
 *
 *        Version:  1.0
 *        Created:  2016/06/11 20时56分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


void printd(int n) {
	if (n < 0) {
		putchar('-');
		n = -n;
	}
	if (n / 10) 
		printd(n / 10);
	putchar(n % 10 + '0');
}

int main() {
	printd(123);
}
