/*
 * =====================================================================================
 *
 *       Filename:  dcl.c
 *
 *    Description:  analyze C declear
 *
 *        Version:  1.0
 *        Created:  06/25/2016 11:33:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

////////////////////////////////////////////////////////////////////////////////////////
// some wrong with io, I will fix it when I figure out how to use getchar correctly!

#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define MAXTOKEN 100

enum { NAME, PARENS, BRACKETS};

void dcl(void);
void dirdcl(void);
int get_token(void);
int token_type;
char token[MAXTOKEN];
char name[MAXTOKEN];
char data_type[MAXTOKEN];
char out[1000];
int get_ch(void);
void unget_ch(int c);

int main() {
	while (get_token() != EOF) {
		strcpy(data_type, token);
		out[0] = '\0';
		dcl();
		if (token_type != '\n')
			printf("syntax error\n");
		printf("%s: %s, %s\n", name, out, data_type);
	}
	return 0;
}


void dcl(void) 
{
	int ns;

	for (ns = 0; get_token() == '*';)
		++ns;
	dirdcl();
	while (ns-- > 0)
		strcat(out, " pointer to");
}


void dirdcl(void)
{
	int type;
	
	if (token_type == '(') {
		dcl();
		if (token_type != ')')
			printf("error: missing )\n");
	} else if (token_type == NAME)
		strcpy(name, token);
	else
		printf("error: expected name or (dcl)\n");
	while ((type = get_token()) == PARENS || type == BRACKETS)
		if (type == PARENS)
			strcat(out, "function returning");
		else {
			strcat(out, " array");
			strcat(out, token);
			strcat(out, " of");
		}	
}

int get_token(void)
{
	int c, get_ch(void);
	void unget_ch(int);
	char *p = token;

	while ((c = get_ch()) == ' ' || c == '\t')
		;
	if (c == '(') {
		if ((c = get_ch()) == ')') {
			strcpy(token, "()");
			return token_type = PARENS;
		} else {
			unget_ch(c);
			return token_type = '(';
		}
	} else if (c == '[') {
		for (*p++ = c; (*p++ = get_ch()) != ']';)
			;
		*p = '\0';
		return token_type = BRACKETS;
	} else if (isalpha(c)) {
		for (*p++ = c; isalnum(c = get_ch());)
			*p++ = c;
		*p = '\0';
		unget_ch(c);
		return token_type = NAME;
	} else
		return token_type = c;
}

static char buf[MAXTOKEN];
static int bufp = 100;

int get_ch(void) {
	printf("please enter the number: \n");
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void unget_ch(int c) {
	if (bufp >= MAXTOKEN)
		printf("unget_ch: too many charachters\n");
	else
		buf[bufp++] = c;
}
