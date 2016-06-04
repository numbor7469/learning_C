/*
 * =====================================================================================
 *
 *       Filename:  bit_move.c
 *
 *    Description:  test << &
 *
 *        Version:  1.0
 *        Created:  2016/05/22 20时56分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  
 *   Organization:  jasen
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>


int num;

int main() {
	num = 3;
	num = num << 2;
	printf("%d\n", num);
	num = num & 4;
	printf("%d", num);
	return 0;
}
