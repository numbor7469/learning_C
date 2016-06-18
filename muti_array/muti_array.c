/*
 * =====================================================================================
 *
 *       Filename:  muti_array.c
 *
 *    Description:  transform MM/DD to a num 
 *
 *        Version:  1.0
 *        Created:  06/14/2016 10:06:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h> 

static char day_tab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, 
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

char *month_name(int n) {
	static char *name[] = {
		"Illegal month",
		"jan", "feb", "mar", "april", "may", "june", 
		"july", "august", "sept", "oct", "mov", "dec"
	};
	return (n < 1 || n > 12) ? name[0] : name[n];
}

int day_of_year(int year, int month, int day) {
	int i, leap;

	leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	for (i = 1; i < month; ++i)
		day += day_tab[leap][i];
	return day;
}


void month_day(int year, int year_day, int *pmonth, int *pday) {
	int i, leap;

	leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	for (i = 0; year_day > day_tab[leap][i]; ++i)
		year_day -= day_tab[leap][i];
	*pmonth = i;
	*pday = year_day;
}


int main () {
	int year;
	int month;
	int day;
	int year_day;
	int pmonth;
	int pday;

	year = 2016;
	month = 6;
	day = 14;
	year_day = 134;
	printf("here\n");
	month_day(year, year_day, &pmonth, &pday);

	printf("today is the: %d day of this year\n", day_of_year(year, month, day));
	printf("134 day is this year's %dmonth, %dday\n",pmonth, pday);
	printf("this is month:%s", month_name(6));

	return 0;
}
