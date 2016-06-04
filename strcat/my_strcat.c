/*
 * =====================================================================================
 *
 *       Filename:  my_strcat.c
 *
 *    Description: my_strcat in c 
 *
 *        Version:  1.0
 *        Created:  2016/05/22 16时06分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void my_strcat(char s[], char t[]){
	int i, j;

	i = j = 0;
	while(s[i] != '\0')
		++i;
	while((s[i++] = t[j++]) != '\0')
		;
}

char s[] = "this is ";
char t[] = "shit";

int main() {
	my_strcat(s, t);
	printf("%s", s);
	return 0;
}
