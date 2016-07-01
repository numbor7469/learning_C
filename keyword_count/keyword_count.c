/*
 * =====================================================================================
 *
 *       Filename:  keyword_count.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/27/2016 22:57:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100
#define NKEYS (sizeof(keytab) / sizeof( struct key))
struct key {
	char *word;
	int count;
} keytab[] = {
	{"auto", 0},
	{"break", 0},
	{"for", 0},
	{"if", 0},
	{"return", 0},
	{"int", 0},
	{"float", 0},
	{"double", 0},
	{"char", 0},
	{"while", 0}
};

int get_word(char *, int);
int bin_search(char *, struct key *, int);

int main()
{
	int n;
	char word[MAXWORD];

	while (get_word(word, MAXWORD) != EOF)
		if (isalpha(word[0]))
			if ((n = bin_search(word, keytab, NKEYS)) >= 0)
				keytab[n].count++;
	for (n = 0; n < NKEYS; n++)
		printf("%4d %s\n", keytab[n].count, keytab[n].word);
	return 0;
}

int bin_search(char *word, struct key tab[], int n)
{
	int cond;
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if ((cond = strcmp(word, tab[mid].word)) < 0)
			high = mid - 1;
		else if (cond > 0)
			low = mid + 1;
		else 
			return mid;
	}
	return -1;
}

int get_ch(void);
void unget_ch(int);

int get_word(char *word, int lim)
{
	int c, get_ch(void);
	void unget_ch(int);
	char *w = word;

	while (isspace(c = get_ch()))
		;
	if (c != EOF)
		*w++ = c;
	if (!isalpha(c)) {
		*w = '\0';
		return c;
	}
	for (; --lim > 0; w++)
		if (isalnum(*w = get_ch())) {
			unget_ch(*w);
			break;
		}
	*w = '\0';
	return word[0];
}


#define BUFSIZE 100
static char buf[BUFSIZE];
static int bufp;

int get_ch(void) {
	printf("please enter the number: \n");
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void unget_ch(int c) {
	if (bufp >= BUFSIZE)
		printf("unget_ch: too many charachters\n");
	else
		buf[bufp++] = c;
}
