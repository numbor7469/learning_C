/*
 * =====================================================================================
 *
 *       Filename:  right_rot.c
 *
 *    Description: 
 *
 *        Version:  1.0
 *        Created:  2016/05/22 21时15分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>


int right_rot(int x, int n) {
	for (int i = 0; i < n; ++i)
		// it seems int here is 4 Bytes
		x = (x >> 1) + (x & 1) * 0x80000000;
	return x;
}


int main() {
	int n = 3;
	int x = 4;
	x = right_rot(x, n);
	printf("%d", x);
	return 0;
}
