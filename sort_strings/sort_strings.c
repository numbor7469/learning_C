/*
 * =====================================================================================
 *
 *       Filename:  sort_strings.c
 *
 *    Description:  sort difference length strings by pointer
 *
 *        Version:  1.0
 *        Created:  06/13/2016 15:35:35
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

char *lineptr[MAXLINES];

int read_lines(char *lineptr[], int nlines);
void write_lines(char *lineptr[], int nlines);
void quick_sort(char *lineptr[], int left, int right);

int main() {
	int nlines;

	if ((nlines = read_lines(lineptr, MAXLINES)) >= 0) {
		quick_sort(lineptr, 0, nlines - 1);
		write_lines(lineptr, nlines);
		return 0;
	} else {
		printf("error: input too big\n");
		return 1;
	}
}


#define MAXLEN 1000
extern int get_line(char *, int);
extern char *alloc(int);


int read_lines(char *lineptr[], int max_lines) {
	int len, nlines;
	char *p, line[MAXLEN];


	nlines = 0;
	while ((len = get_line(line, MAXLEN)) > 0)
		if (nlines >= max_lines || (p = alloc(len)) == NULL)
			return -1;
		else {
			line[len - 1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}


void write_lines(char *lineptr[], int nlines) {
	while ((nlines--) > 0)
		printf("%s\n", *lineptr);
}


void quick_sort(char *v[], int left, int right) {
	int i, last;
	void swap(char *[], int i, int j);

	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++left, i);
	swap(v, left, right);
	quick_sort(v, left, last - 1);
	quick_sort(v, last + 1, right);
}


void swap(char *v[], int i, int j) {
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
