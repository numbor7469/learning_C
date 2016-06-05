/*
 * =====================================================================================
 *
 *       Filename:  my_itoa.c
 *
 *    Description:  swith int to char and save it
 *
 *        Version:  1.0
 *        Created:  2016/06/04 21时04分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


void my_itoa(int n, char s[]) {
	int i, sign;

	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	//it need to be reverse here
}


int main() {
	int n = 12356432;
	char s[10];
	
	my_itoa(n, s);
	printf("%d swith to char is %s", n, s);

	return 0;
}
