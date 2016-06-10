/*
 * =====================================================================================
 *
 *       Filename:  my_atof.c
 *
 *    Description:  change string to double
 *
 *        Version:  1.0
 *        Created:  2016/06/04 23时04分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <ctype.h>
#include <stdio.h>



double my_atof(char []);


int main() {
	double num;
	char s[] = "12345.233";

	num = my_atof(s);
	printf("we get number %f", num);

	return 0;
}


double my_atof(char s[]) {
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		++i;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}

	return sign * val / power;

}
