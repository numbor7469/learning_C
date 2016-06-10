/*
 * =====================================================================================
 *
 *       Filename:  calculator.c
 *
 *    Description:  calculator with reverse Polish notition
 *
 *        Version:  1.0
 *        Created:  2016/06/08 23时53分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0'

int get_op(char []);
void push(double);
double pop(void);
void head(void);
double copy(void);
void delete(void);

int main() {
	int type;
	double op2;
	char s[MAXOP];

	while ((type = get_op(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divitors!");
				break;
			case '%':
				op2 = pop();
				op2 = (op2 > 0) ? op2 : -op2;
				push(op2);
				break;
			case '\n':
				head();
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}


#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f) {
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void) {
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

void head(void) {
	if (sp > 0)
		printf("this is the head: %g\n", val[sp - 1]);
	else
		printf("error: stack empty\n");
}

double copy(void) {
	if (sp > 0)
		return val[sp];
	else
		printf("error: stack empty\n");
	return EOF;
}

void delete(void) {
	sp = 0;
}


#include <ctype.h>

int get_ch(void);
void unget_ch(int);

int get_op(char s[]) {
	int i, c;

	while ((s[0] = c = get_ch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.' && c != '-')
		return c;
	i = 0;
	if (isdigit(c) || c == '-')
		while (isdigit(s[++i] = c = get_ch()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = get_ch()))
			;
	s[i] = '\0';
	if (c != EOF)
		unget_ch(c);
	return NUMBER;
}


#define BUFSIZE 100

char buf[BUFSIZE];
int bufp;

int get_ch(void) {
	printf("\n num index: ");
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void unget_ch(int c) {
	if (bufp >= BUFSIZE)
		printf("unget_ch: too many charachters\n");
	else
		buf[bufp++] = c;
}
