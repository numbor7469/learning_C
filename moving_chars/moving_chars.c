/*
 * =====================================================================================
 *
 *       Filename:  moving_chars.c
 *
 *    Description:  moving chars in a effective way
 *
 *        Version:  1.0
 *        Created:  06/17/2016 15:20:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string.h>
#include <stdio.h>

#define N 1024

static char buffer[N];
static char *bufptr;

void buf_write(char *p, int n) 
{
	while(n > 0) {
		int k, rem;
		if (bufptr == &buffer[N])
/* 			flush_buffer();
 */
			return;
		rem = N - (bufptr - buffer);
		k = n > rem ? rem : n;
		memcpy(bufptr, p, k);
		bufptr += k;
		n -= k;
	}
}


int main() {
	char * str = "this is a long sentence";
	bufptr = buffer;

	buf_write(str, 10);
	printf("%s", buffer);
}
