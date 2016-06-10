/*
 * =====================================================================================
 *
 *       Filename:  get_op.c
 *
 *    Description:  get operator from input
 *
 *        Version:  1.0
 *        Created:  2016/06/10 17时12分09秒
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
#include "calc.h"


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

