/*
 * =====================================================================================
 *
 *       Filename:  word_count.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016/05/21 16时51分57秒
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

#define IN 1
#define OUT 0


int main(){
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF){
		++nc;
		if (c == '\n')
			++nl;
		// from left to the right!
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
