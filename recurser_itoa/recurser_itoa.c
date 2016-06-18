/*
 * =====================================================================================
 *
 *       Filename:  recurser_itoa.c
 *
 *    Description:  itoa with method recurser
 *
 *        Version:  1.0
 *        Created:  2016/06/11 22时26分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string.h>
#include <stdio.h>


int i = 0;
void recurser_itoa(int n, char s[]) {
	if (n / 10)
		recurser_itoa(n / 10, s);
	s[i++] = n % 10 + '0';
}

int main() {
	char s[100];
	memset(s, 0, 100);
	recurser_itoa(1234, s);
	printf("this is result: %s", s);

	return 0;
}

