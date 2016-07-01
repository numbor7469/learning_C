/*
 * =====================================================================================
 *
 *       Filename:  struct.c
 *
 *    Description:  test for struct
 *
 *        Version:  1.0
 *        Created:  06/27/2016 20:50:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

struct point {
	int x;
	int y;
};
struct rect {
	struct point pt1;
	struct point pt2;
};
struct point makepoint(int x, int y) 
{
	struct point temp;


	temp.x = x;
	temp.y = y;
	return temp;
}


struct rect screem;
struct point middle;
struct point makepoint(int, int);

struct point addpoint(struct point p1, struct point p2) 
{
	p1.x += p2.x;
	p1.y +=p2.y;
	return p1;
}
int pt_in_rect(struct point p, struct rect r)
{
	return p.x >= r.pt1.x 
		&& p.x < r.pt2.x
		&& p.y >= r.pt1.y 
		&& p.y < r.pt2.y;
}

#define max(a, b) ((a) < (b) ? (a) : (b))
#define min(a, b) ((a) > (b) ? (a) : (b))

struct rect canon_rect(struct rect r)
{
	struct rect temp;

	temp.pt1.x = min(r.pt1.x, r.pt2.x);
	temp.pt1.y = min(r.pt1.y, r.pt2.y);
	temp.pt2.x = max(r.pt1.x, r.pt2.x);
	temp.pt2.y = max(r.pt1.y, r.pt2.y);
	return temp;
}

struct point origin, *pp;

int main() {
	pp = &origin;
	printf("origin is (%d, %d)\n", (*pp).x, (*pp).y);
}
