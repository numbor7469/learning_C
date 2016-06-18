/*
 * =====================================================================================
 *
 *       Filename:  quick_sort.c
 *
 *    Description:  quick sort with recurser
 *
 *        Version:  1.0
 *        Created:  2016/06/11 21时16分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

void quick_sort(int v[], int left, int right) {
	int i, last;
	void swap(int v[], int i, int j);

	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	printf("last is: %d\n", last);
	quick_sort(v, left, last - 1);
	quick_sort(v, last + 1, right);
}


void swap(int v[], int i, int j) {
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

int main() {
	int array[] = { 23, 22, 2, 43, 5, 23, 0, 89, 82, 2, 32};
	quick_sort(array, 0, 10);
	for (int i = 0; i < 11; ++i)
		printf("%d ", array[i]);
}
