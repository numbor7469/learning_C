/*
 * =====================================================================================
 *
 *       Filename:  array_pointer.c
 *
 *    Description:  acomplish array_pointer 
 *
 *        Version:  1.0
 *        Created:  06/16/2016 15:59:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


int main() {
	int calendar[12][31];
	int (*monthp) [31];
	for (monthp = calendar; monthp < &calendar[12]; monthp++) {
		int *dayp;
		for (dayp = *monthp; dayp < &(*monthp)[31]; dayp++)
			*dayp = 0;
	}
}
