/*
 * =====================================================================================
 *
 *       Filename:  get_char.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016/05/21 16时14分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>



int main(){
	int c;
	// why several words is ok here!
	// it seems while can help you do it
	c = getchar();
	putchar(c);
	return 0;
}
