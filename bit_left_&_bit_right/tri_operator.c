/*
 * =====================================================================================
 *
 *       Filename:  tri_operator.c
 *
 *    Description:  actually it is about int
 *
 *        Version:  1.0
 *        Created:  2016/05/22 22时31分16秒
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


int x;

int main() {
	x = 0x80000000;
	x = -1;
	x = 0xFFFFFFFF;
	x = -2;
	x = ~(-1);
	x = ~(0);
	x = 0x8000000F;
	x = -2;

	printf("%d\n", x);
	printf("%d", (x & 01));
	for (int i = 0; i < 31; ++i) {
		printf("%d", ((x >>= 1) & 01));
	}
	x <<= 31;
	printf("\n%d", x);
	return 0;
}

