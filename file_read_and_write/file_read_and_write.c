/*
 * =====================================================================================
 *
 *       Filename:  file_read_and_write.c
 *
 *    Description:  test for file read and write
 *
 *        Version:  1.0
 *        Created:  06/18/2016 10:09:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

struct record {
	int a;
	char b;
};
struct record rec = {1, 'b'};
FILE *fp;


int main() {
	printf("this rec: %d, %c", rec.a, rec.b);
 	fp = fopen("test.dat", "w+");
	if (fp)
		fwrite(&rec, sizeof(rec), 1, fp);
 	fclose(fp);
}
