/*
 * =====================================================================================
 *
 *       Filename:  char_array.c
 *
 *    Description:  test char[ ]
 *
 *        Version:  1.0
 *        Created:  2016/05/21 18时36分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: jasen 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

#define MAXLINE 1000


// declare
int get_length(char line[], int max_line);
void copy(char to[], char from[]);


int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = get_length(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}


int get_length(char s[], int lim) {
	int c, i;
	
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}


void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
