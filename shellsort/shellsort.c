/*
 * =====================================================================================
 *
 *       Filename:  shellsort.c
 *
 *    Description:  test shellsort
 *
 *        Version:  1.0
 *        Created:  2016/06/04 20时22分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


void shellsort(int v[], int n) {
	int gap, i, j, temp;

	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = gap; i < n; i ++)
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
}


int main() {
	int i;
	int v[] = {1, 4, 2, 0, 23, 1, 8, 9};
	shellsort(v, 8);
	for (i = 0; i < 8; i++)
		printf("%d ", v[i]);
}
