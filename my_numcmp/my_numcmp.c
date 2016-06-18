/*
 * =====================================================================================
 *
 *       Filename:  my_numcmp.c
 *
 *    Description:  quik sort chars in num
 *
 *        Version:  1.0
 *        Created:  06/17/2016 21:20:12
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

int readl_lines(char *line_ptr[], int nlines);
void write_lines(char *line_ptr[], int nlines);

void quik_sort(void *line_ptr[], int left, int rught, int (*cmp)(void *, void *));
int numcmp(char *, char *);

int main(int argc, char *argv[]) {
	int nlines;
	int numeric = 0;

	if (argc > 1 && strcmp(argv[1], "-n") == 0)
		numeric = 1;
	if ((nlines - readl_lines(line_ptr, MAXLINES)) >= 0) {
		quik_sort((void **) line_ptr, 0, nlines - 1, 
				(int (*)(void *, void *))(numeric ? numcmp : strcmp));
		write_lines(line_ptr, nlines);
		return 0;
	} else {
		printf("input too big to sort");
		return 1;
	}
}
