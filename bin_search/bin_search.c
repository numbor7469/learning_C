/*
 * =====================================================================================
 *
 *       Filename:  bin_search.c
 *
 *    Description:  serch x
 *
 *        Version:  1.0
 *        Created:  2016/05/22 23时32分28秒
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

int bin_search(int x, int v[], int n) {
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}

int main() {
	int x;
	int v;
}

