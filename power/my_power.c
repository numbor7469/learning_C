/*
 * =====================================================================================
 *
 *       Filename:  my_power.c
 *
 *    Description:  calculate power only
 *
 *        Version:  1.0
 *        Created:  2016/05/21 17时39分38秒
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

int power(int m, int n);


int main(){
	int i;
	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));
	return 0;
}

int power(int base, int n){
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;

}
