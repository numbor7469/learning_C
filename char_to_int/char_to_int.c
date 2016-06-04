/*
 * =====================================================================================
 *
 *       Filename:  char_to_int.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016/05/22 15时29分29秒
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


char c[10];
int num[10];

int atoi(char s[]);

int main() {
	c = "24342654";
        num = atoi(c);
	printf(num);
}


int atoi(char s[]) 
{
	int i, n;
	
	n = 0;
	for (i = 0; s[i] > '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
