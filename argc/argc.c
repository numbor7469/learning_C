/*
 * =====================================================================================
 *
 *       Filename:  argc.c
 *
 *    Description:  test for argc
 *
 *        Version:  1.0
 *        Created:  06/14/2016 12:02:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


int main(int argc, char *argv[]) {
	int i;

	for (i = 0; i < argc; i++) {
		printf("%s%s\n", argv[i], (i < argc - 1)? " " : "");
		printf("%d", i);
	}
	printf("\n");
	return 0;
}
