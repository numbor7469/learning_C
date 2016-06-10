/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  main part of the calculator
 *
 *        Version:  1.0
 *        Created:  2016/06/10 17时10分05秒
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
#include "calc.h"

#define MAXOP 100

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
