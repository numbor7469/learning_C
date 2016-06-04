/*
 * =====================================================================================
 *
 *       Filename:  open_file.c
 *
 *    Description: 
 *
 *        Version:  1.0
 *        Created:  2016/05/21 22时40分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: jasen 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>


FILE *fid;
char content[255];


int main() {
	fid = fopen("test.txt", "w+");
	fprintf(fid, "this is testing fprintf\n");
	fputs("this is testing fputs\n", fid);
	fclose(fid);
	return 0;
}
