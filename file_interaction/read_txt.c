/*
 * =====================================================================================
 *
 *       Filename:  read_txt.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016/05/21 23时17分42秒
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
char buff[255];


int main() {
	fid = fopen("test.txt", "r");
	fscanf(fid, "%s", buff);
	printf("1: %s\n", buff);

	fgets(buff, 255, (FILE*) fid);
	printf("2: %s\n", buff);

	fgets(buff, 255, (FILE*) fid);
	printf("3: %s\n", buff);
	fclose(fid);
	return 0;
}
