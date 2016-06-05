/*
 * =====================================================================================
 *
 *       Filename:  find_pattern.c
 *
 *    Description:  find the place of the given pattern
 *
 *        Version:  1.0
 *        Created:  2016/06/04 21时59分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define MAXLINE 100


int get_line(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";


int main() {
	char line[MAXLINE];
	int found = 0;

	while (get_line(line, MAXLINE) > 0)
		if (strindex(line, pattern) > 0) {
			printf("%s", line);
			found ++;
		}
	return found;
}


int get_line(char s[], int lim) {
	int c, i;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}



int strindex(char s[], char t[]) {
	int i, j, k;

	for (i = 0; s[i] != '\n'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}
