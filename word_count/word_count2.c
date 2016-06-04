/*
 * =====================================================================================
 *
 *       Filename:  word_count2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016/05/21 17时08分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>


int main(){
	// declear
	int c, i, nwhite, nother;
	int ndigit[10];

	//asignment
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	printf("digits = ");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
