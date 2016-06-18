/*
 * =====================================================================================
 *
 *       Filename:  my_strcpy.c
 *
 *    Description:  different ways to get strcpy
 *
 *        Version:  1.0
 *        Created:  2016/06/13 09时38分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


void strcpy_1(char *s, char *t) {
	int i;

	i = 0;
	while ((s[i] = t[i]) != 0)
		i++;
}


void strcpy_2 (char *s, char *t) {
	int i;

	i = 0;
	while ((*s = *t)) {
		s++;
		t++;
	}
}


void strcpy_3 (char *s, char *t) {
	while ((*(s++) = *(t++)))
		;
}


int main() {
	char s[20] = "hell world";
	char t[20] = "hello world";

	strcpy_1(s, t);
	printf("%s\n", s);

	return 0;
}
