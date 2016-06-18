/*
 * =====================================================================================
 *
 *       Filename:  grep.c
 *
 *    Description:  find the first line match the pattern
 *
 *        Version:  1.0
 *        Created:  06/14/2016 13:02:57
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
#define MAXLINE 1000

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

int main(int argc, char *argv[]) {
	char line[MAXLINE] = "hello";
	int found = 0;

	if (argc != 2)
		printf("Usage: find pattern\n");
	else
		while (get_line(line, MAXLINE) > 0)
			if (strstr(line, argv[1]) != NULL) {
				printf("pattern find: %s", line);
				found++;
			}
	return found;
}
