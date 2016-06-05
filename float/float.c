/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  test storage size of float and posibale value range
 *
 *        Version:  1.0
 *        Created:  2016/06/04 15时03分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>


float FLT_MIN, FLT_MAX;
int FLT_DIG;
int main()
{
	printf("storage size for float: %lu \n", sizeof(float));
	printf("Minimum float positive value: %E \n", FLT_MIN);
	printf("Maximum float positive value: %E \n", FLT_MAX);
	printf("Precision value: %d \n", FLT_DIG);

	return 0;
}
