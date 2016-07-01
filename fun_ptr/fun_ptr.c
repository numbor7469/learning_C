/*
 * =====================================================================================
 *
 *       Filename:  fun_ptr.c
 *
 *    Description:  quick_sort which focus on function pointer
 *
 *        Version:  1.0
 *        Created:  06/25/2016 09:36:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
char *line_ptr[MAXLINES];

int read_lines(char *line_ptr[], int nlines);
void write_lines(char *line_ptr[], int nlines);

void quick_sort(
		void *line_ptr[], int left, int right,
		int (*comp)(void *, void *));
int numcmp(char *, char *);

int main(int argc, char *argv[]) {
	int nlines;
	int numeric = 0;

	if (argc > 1 && strcmp(argv[1], "-n") == 0)
		numeric = 1;
	if ((nlines = read_lines(line_ptr, MAXLINES)) >= 0) {
		quick_sort(
				(void **)line_ptr, 0, nlines - 1, 
				(int (*)(void *, void *))(numeric ? numcmp : strcmp));
		write_lines(line_ptr, nlines);
		return 0;
	} else {
		printf("input too big to sort\n");
		return 1;
	}
}


void quick_sort(
		void *v[], int left, int right, int (*comp)(void *, void *))
{
	int i, last;
	void swap(void *v[], int, int);

	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if ((*comp)(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	quick_sort(v, left,last - 1, comp);
	quick_sort(v, last + 1, right, comp);
}


#include <stdlib.h>

int numcmp(char *s1, char *s2)
{
	double v1, v2;

	v1 = atof(s1);
	v2 = atof(s2);
	if (v1 < v2)
		return -1;
	else if (v1 > v2)
		return 1;
	else
		return 0;
}


void swap(void *v[], int i, int j)
{
	void *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}


int read_lines(char *line_ptr[], int nlines)
{
	char s;

	for (int i = 0; i < nlines; ++i) {
		while ((s = getchar()) != '\n')
			strcat(line_ptr[i], &s);
		if (strlen(line_ptr[i]) == 1)
			return i;
	}
}
void write_lines(char *line_ptr[], int nlines)
{
	for (int i = 0; i < nlines; ++i) {
		printf("%s\n", line_ptr[i]);
	}
}
