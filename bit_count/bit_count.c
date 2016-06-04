/*
 * =====================================================================================
 *
 *       Filename:  bit_count.c
 *
 *    Description:  how many 1 in x
 *
 *        Version:  1.0
 *        Created:  2016/05/22 21时53分48秒
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

int bit_count(int x) {
	int b;
	for (b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	return b;
}


int main() {
	int x;
	//int b;
	
	//TODO this is different for negtive value 
	x = -0x8;
	//b = bit_count(x);
	x >>= 5;
	printf("%d", x);
	return 0;

}
