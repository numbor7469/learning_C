/*
 * =====================================================================================
 *
 *       Filename:  undefined_use.c
 *
 *    Description:  an undefined use of &
 *
 *        Version:  1.0
 *        Created:  06/17/2016 16:47:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int num[100];

int main() {
	int i = 0;
	for (i = 0; i < 100; ++i)
		num[i] = i + 1;
	i = 0;
	while (i < 100 & num[i] != 0) {
		printf("%d %d\t", i, (i < 100 & num[i] != 0));	
		i++;
	}
}
