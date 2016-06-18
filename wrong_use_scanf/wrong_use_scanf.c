/*
 * =====================================================================================
 *
 *       Filename:  wrong_use_scanf.c
 *
 *    Description:  a particular case of wrong use of scanf
 *
 *        Version:  1.0
 *        Created:  06/17/2016 18:11:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main() {
	int i;
	int c;

	for (i = 0; i < 5; ++i) {
		scanf("%d", &c);
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}
