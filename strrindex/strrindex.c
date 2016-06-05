/*
 * =====================================================================================
 *
 *       Filename:  strrindex.c
 *
 *    Description:  get position of t from the right of s
 *
 *        Version:  1.0
 *        Created:  2016/06/04 22时26分19秒
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


int strrindex(char s[], char t[]);

int main() {
	int n;
	char s[] = "this is long string";
	char t[] = "long";

	n = strrindex(s, t);
	printf("position of %s is %d", t, n);

	return 0;
}


int strrindex(char s[], char t[]) {
	int i, j;

	for (j = strlen(s) -  1; j > strlen(t) - 1; --j)
		for (i = 0; t[strlen(t) - i - 1] == s[j - i]; ++i)
			if (i == strlen(t) - 1)
				return j - i + 1;
	return -1;

}
