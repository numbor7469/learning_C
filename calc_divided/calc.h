/*
 * =====================================================================================
 *
 *       Filename:  calc.h
 *
 *    Description:  head of this calculor, global varies
 *
 *        Version:  1.0
 *        Created:  2016/06/10 17时20分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#define NUMBER '0'


int get_op(char []);
void push(double);
double pop(void);
void head(void);
double copy(void);
void my_delete(void);
int get_ch(void);
void unget_ch(int);
