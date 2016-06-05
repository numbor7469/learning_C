/*
 * =====================================================================================
 *
 *       Filename:  my_trim.c
 *
 *    Description:  delete useless space tab and \n
 *
 *        Version:  1.0
 *        Created:  2016/06/04 21时34分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>



int trim (char s[]) {
	int n;

	for (n = strlen(s) - 1; n >= 0; n--)
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
	s[n + 1] = '\0';
	return n;
}


int main() {
	int n;
	char s[] = "this is a long string   ";

	n = trim(s);
	printf("after trim string became %s, lenghth is %d", s, n);

	return 0;
}
