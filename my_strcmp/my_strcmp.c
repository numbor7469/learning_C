/*
 * =====================================================================================
 *
 *       Filename:  my_strcmp.c
 *
 *    Description:  different ways to accomplish strcmp
 *
 *        Version:  1.0
 *        Created:  2016/06/13 09时52分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


int strcmp_1(char *s, char *t) {
	int i;
	
	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;
	return s[i] - t[i];
}

int strcmp_2(char *s, char *t) {
	for (; *s == *t; ++s, ++t)
		if (*s == '\0')
			return 0;
	return *s - *t;
}


int main() {
	char s[31] = "hello world";
	char t[31] = "hello world";
	int i = strcmp_1(s, t);
	int j = strcmp_2(s, t);

	printf("the respectly result is: %d, %d\n", i, j);
}
